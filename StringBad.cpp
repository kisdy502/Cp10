//
// Created by Administrator on 2018/8/16.
//

#include <cstring>
#include <iostream>
#include "StringBad.h"

using namespace std;

StringBad::StringBad() {
    std::cout << "defalt" << std::endl;
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");
    num_strings++;
}

StringBad::StringBad(const char *_str) {
    len = strlen(_str);
    std::cout << "len:" << len << std::endl;
    str = new char[len + 1];
    std::strcpy(str, _str);
    std::cout << "str:" << &str << std::endl;
    std::cout << str << endl;
    num_strings++;
    std::cout << "num_strings:" << num_strings << std::endl;

}



StringBad::~StringBad() {
    num_strings--;
    std::cout << "~num_strings:" << num_strings << std::endl;
    delete[] str;
}


std::ostream &operator<<(std::ostream &os, const StringBad &stringBad) {
    os << stringBad.str << std::endl;
    return os;
}


StringBad StringBad::operator=(StringBad &sb) {
    std::cout << "operator=" << std::endl;
    if (this == &sb) {
        return *this;
    }
    delete[]str;
    len = sb.len;
    str = new char[len + 1];
    strcpy(str, sb.str);
    return *this;
}


int StringBad::num_strings = 0;