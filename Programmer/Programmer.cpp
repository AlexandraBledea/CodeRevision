//
// Created by Alexandra on 6/16/2021.
//

#include "Programmer.h"

#include <utility>
#include <sstream>

string Programmer::getName() {
    return this->name;
}

int Programmer::getNrRevisedFiles() {
    return this->nrRevisedFiles;
}

int Programmer::getTotalFiles() {
    return this->totalFiles;
}

Programmer::Programmer() {

}

Programmer::Programmer(string name, int nrRevisedFiles, int totalFiles): name{name}, nrRevisedFiles{nrRevisedFiles},
totalFiles{totalFiles}{

}

vector<string> Programmer::tokenize(string str, char delimiter) {
    return vector<string>();
}

istream &operator>>(istream &input, Programmer &p) {
    input>>p.name>>p.nrRevisedFiles>>p.totalFiles;
    return input;
}

Programmer::~Programmer() {

}

void Programmer::setNrRevisedFiles(int number) {
    this->nrRevisedFiles = number;
}
