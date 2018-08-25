//
// Created by Administrator on 2018/8/14.
//

#include <iostream>
#include "MyTime.h"

MyTime::MyTime() {
    hour = 0;
    minutes = 0;
}

MyTime::MyTime(int h, int m) {
    hour = h;
    minutes = m;
}

void MyTime::AddHour(int h) {
    hour += hour;
}

void MyTime::AddMinute(int m) {
    minutes += m;
    hour += minutes / 60;
    minutes %= minutes;
}

MyTime MyTime::operator+(const MyTime &time) const {
    MyTime sum;
    sum.hour = hour + time.hour;
    sum.minutes = minutes + time.minutes;
    sum.hour += sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

MyTime MyTime::operator-(const MyTime &time) const {
    MyTime diff;
    diff.minutes = minutes + 60 - time.minutes;
    diff.hour = hour - 1 - time.hour + diff.minutes / 60;
    diff.minutes %= 60;
    return diff;
}

MyTime MyTime::operator*(double n) const {
    int total = n * (hour * 60 + minutes);
    MyTime result;
    result.minutes = minutes + total;
    result.hour = hour + result.minutes / 60;
    result.minutes %= 60;
    return result;
}

std::ostream &operator<<(std::ostream& os, const MyTime &time) {
    os << time.hour << "hour," << time.minutes << "minute" << std::endl;
    return os;
}


void MyTime::Reset(int h, int m) {
    hour = h;
    minutes = m;
}

void MyTime::show() {
    std::cout << hour << "hour," << minutes << "minute" << std::endl;
}