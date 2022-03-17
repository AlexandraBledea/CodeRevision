//
// Created by Alexandra on 6/16/2021.
//

#pragma once
#include "fstream"
#include <vector>
#include <string>
using namespace std;
#include "Observer.h"
#include "Programmer.h"
#include "SourceFile.h"

class Files: public Observable{

private:
    vector<SourceFile> files;
    void LoadData();

public:

    void addSourceFile(SourceFile f);
    void makeRevised(SourceFile& f, string name);
    vector<SourceFile>& getAll();
    int checkExistence(string name);
    Files();
    ~Files();

};

