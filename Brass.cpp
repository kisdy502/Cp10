//
// Created by Administrator on 2018/8/25.
//


#include "Brass.h"

ios_base::fmtflags setFormat() {
    return cout.setf(ios_base::fixed, ios_base::floatfield);
}

void restore(ios_base::fmtflags f,streamsize p) {
    cout.setf(f,ios_base::floatfield);
    cout.precision(p);
}

Brass::Brass(const string &fn, const long an, double bal) : fullName(fn), accountNum(an), balane(bal) {}

void Brass::Deposit(double acc) {
    if (acc < 0) {
        cout << "deposit money must >0" << endl;
    } else {
        balane += acc;
    }
}

void Brass::ViewAcct() {

}

void Brass::Withdraw(double amt) {

}

double Brass::Balance() const {
    return balane;
}