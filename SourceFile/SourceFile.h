//
// Created by Alexandra on 6/16/2021.
//

#pragma once
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class SourceFile {

private:
    string name;
    string status;
    string creator;
    string reviewer;

public:

    SourceFile();
    SourceFile(string name, string creator);
    SourceFile(string name, string status, string creator, string reviewer);

    string getName();
    string getStatus();
    string getCreator();
    string getReviewer();

    void setCreator(string creator);
    void setReviewer(string reviewer);
    void setStatus(string status);
    friend istream& operator>>(istream&, SourceFile&);
    bool operator==(const SourceFile &s);

};
