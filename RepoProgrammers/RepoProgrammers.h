//
// Created by Alexandra on 6/16/2021.
//

#pragma once
#include <vector>
#include "Programmer.h"
#include <string>
#include "Observer.h"
using namespace std;

class RepoProgrammers: public Observable{

private:
    vector<Programmer> programmers;
    void LoadData();

public:
    vector<Programmer>& getAll();
    RepoProgrammers();
    ~RepoProgrammers();

};

