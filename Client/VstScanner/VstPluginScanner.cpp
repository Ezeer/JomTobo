#include "VstPluginScanner.h"
#include <exception>
#include <iostream>
#include <QDataStream>
#include <QDirIterator>
#include "audio/core/PluginDescriptor.h"
#include "audio/vst/VstHost.h"
#include "log/logging.h"

VstPluginScanner::VstPluginScanner()
    :QObject()
{
    qCDebug(jtStandalonePluginFinder) << "Creating vst plugin scanner!";
}

void VstPluginScanner::start(int argc, char* argv[]){
    initialize(argc, argv);//get the folders to scan and black listed plugin paths
    scan();
}

void VstPluginScanner::scan(){
    if(foldersToScan.isEmpty()){
        qCInfo(jtStandalonePluginFinder) << "Folders to scan is empty!";
        return;
    }
    else{
        qCDebug(jtStandalonePluginFinder) << "Folders to scan: " << foldersToScan;
    }

    writeToProcessOutput("JT-Scanner-Starting");
    foreach (QString scanFolder, foldersToScan) {
        QDirIterator folderIterator(scanFolder, QDirIterator::Subdirectories);
        while (folderIterator.hasNext()) {
            folderIterator.next();//point to next file inside current folder
            if(isVstPluginFile(folderIterator.filePath())){
                QFileInfo pluginFileInfo(folderIterator.filePath());
                if(!blackList.contains(pluginFileInfo.absoluteFilePath())){
                    writeToProcessOutput("JT-Scanner-Scanning: " + pluginFileInfo.absoluteFilePath());
                    const Audio::PluginDescriptor& descriptor = getPluginDescriptor(pluginFileInfo);
                    if(descriptor.isValid()){
                        writeToProcessOutput("JT-Scanner-Scan-Finished: " + descriptor.getPath());
                    }
                }
            }
        }
    }
    writeToProcessOutput("JT-Scanner-Finished");
}

void VstPluginScanner::writeToProcessOutput(QString string){
    //using '\n' here because std::endl don't work well when reading the output from QProcess
    std::cout << '\n' << string.toStdString() << '\n';
    std::flush(std::cout);//necessary to avoid split some outputed lines
}

void VstPluginScanner::initialize(int argc, char *argv[]){
    qCInfo(jtStandalonePluginFinder) << "Initializing scan folders list and blackList!";
    if(argc < 2){//The first arg is always the executable path. We need at least the folders strinb (2nd arg). The blacklist can be empty.
        return;
    }
    QString foldersString = QString::fromUtf8(argv[1]);
    if(!foldersString.isEmpty()){
        this->foldersToScan = foldersString.split(";"); //the folders are separated using ';'
    }
    if(argc > 2){//we have a black list string?
        QString blackListString = QString::fromUtf8(argv[2]);
        if(!blackListString.isEmpty()){
            this->blackList = blackListString.split(";");
        }
    }
}

