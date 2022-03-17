//
// Created by Alexandra on 6/16/2021.
//

#include "RepoProgrammers.h"
#include "fstream"

RepoProgrammers::RepoProgrammers() {
    this->LoadData();
}

RepoProgrammers::~RepoProgrammers() {

}

vector<Programmer>& RepoProgrammers::getAll() {
    return this->programmers;
}

void RepoProgrammers::LoadData() {
    ifstream inFile("programmers.txt");
    Programmer currentElement;
    this->programmers.clear();
    while(inFile >> currentElement){
        this->programmers.push_back(currentElement);
    }
    inFile.close();
}
