//
// Created by Alexandra on 6/16/2021.
//

#include "Files.h"

#include <utility>

void Files::LoadData() {
    ifstream inFile("sources.txt");
    SourceFile currentElement;
    this->files.clear();
    while(inFile >> currentElement){
        this->files.push_back(currentElement);
    }
    inFile.close();
}

vector<SourceFile>& Files::getAll() {
    return this->files;
}

Files::Files() {
    this->LoadData();
}

Files::~Files() {

}

void Files::addSourceFile(SourceFile f) {
    this->files.push_back(f);
    this->notify();
}

void Files::makeRevised(SourceFile& f, string name) {
    for(auto & file: this->files)
        if(file == f){
            file.setStatus("revised");
            file.setReviewer(name);
        }
    this->notify();
}

int Files::checkExistence(string name) {
    for(int i=0; i< this->files.size(); i++){
        if(this->files[i].getName() == name)
            return i;
    }
    return -1;
}
