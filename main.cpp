#include <iostream>
#include <QApplication>
#include <RepoProgrammers.h>
#include <Files.h>
#include <ProgrammerWindow.h>
#include "StatisticsWindow.h"
int main(int argc, char** argv) {
    QApplication a(argc, argv);

    RepoProgrammers repoProgrammers;
    Files files;
    vector<ProgrammerWindow*> windows;
    for(auto & p: repoProgrammers.getAll()){
        windows.push_back(new ProgrammerWindow(files, p));
    }

    StatisticsWindow statsWindow(repoProgrammers, files);

    return a.exec();
}
