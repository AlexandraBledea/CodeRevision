//
// Created by Alexandra on 6/16/2021.
//

#include "SourceFile.h"

SourceFile::SourceFile() {

}

SourceFile::SourceFile(string name, string creator): name{name}, status{"not-revised"}, creator{creator}, reviewer{"-"}{
}

SourceFile::SourceFile(string name, string status, string creator, string reviewer): name{name}, status{status}, creator{creator}, reviewer{reviewer} {

}

string SourceFile::getName() {
    return this->name;
}

string SourceFile::getStatus() {
    return this->status;
}

string SourceFile::getCreator() {
    return this->creator;
}

string SourceFile::getReviewer() {
    return this->reviewer;
}

void SourceFile::setCreator(string creator) {
    this->creator = creator;
}

void SourceFile::setReviewer(string reviewer) {
    this->reviewer = reviewer;
}

void SourceFile::setStatus(string status) {
    this->status = status;
}

istream &operator>>(istream &input, SourceFile &s) {
    input>>s.name>>s.status>>s.creator>>s.reviewer;
    return input;
}

bool SourceFile::operator==(const SourceFile &s) {
    if(this->name == s.name && this->status == s.status && this->creator == s.creator && this->reviewer == s.reviewer)
        return true;
    return false;
}

