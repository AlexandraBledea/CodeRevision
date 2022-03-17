//
// Created by Alexandra on 6/16/2021.
//

#pragma once
#include <string>
#include <vector>
using namespace std;

class Programmer {

private:
    string name;
    int nrRevisedFiles;
    int totalFiles;

public:

    ~Programmer();
    Programmer();
    Programmer(string name, int nrRevisedFiles, int totalFiles);

    string getName();
    int getNrRevisedFiles();
    int getTotalFiles();
    void setNrRevisedFiles(int number);
    static vector<string> tokenize(string str, char delimiter);
    friend istream& operator>>(istream&, Programmer&);
};
