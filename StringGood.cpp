//
// Created by Administrator on 2018/8/17.
//

#include <cstring>
#include <iostream>
#include "StringGood.h"

using namespace std;

StringGood::StringGood() {
    len = 0;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
    std::cout<<num_strings<<std::endl;
}

StringGood::StringGood(const char *data) {
    len = strlen(data);
    str = new char[len + 1];
    strcpy(str, data);
    num_strings++;
    std::cout<<num_strings<<std::endl;

}

StringGood::StringGood(StringGood &stringGood) {
    len = stringGood.len + 1;
    str = new char[len + 1];
    std::strcpy(str, stringGood.str);
    num_strings++;
    std::cout<<num_strings<<std::endl;
}

StringGood::~StringGood() {
    num_strings--;
    std::cout<<num_strings<<std::endl;
    delete[]str;
}

bool StringGood::operator<(StringGood &sg) const {
    if (std::strcmp(str, sg.str) < 0) {
        return true;
    }
    return false;
}

bool StringGood::operator>(StringGood &sg) const {
    if (std::strcmp(str, sg.str) > 0) {
        return true;
    }
    return false;
}

bool StringGood::operator==(StringGood &sg) const {
    if (std::strcmp(str, sg.str) == 0) {
        return true;
    }
    return false;
}

StringGood StringGood::operator=(StringGood &sg) {
    std::cout << "operator=" << std::endl;
    if (this == &sg) {
        return *this;
    }
    delete[]str;
    len = sg.len;
    str = new char[len + 1];
    strcpy(str, sg.str);
    return *this;
}

void StringGood::show() {
    std::cout << "StringGood:" << str << std::endl;
}

int StringGood::num_strings = 0;