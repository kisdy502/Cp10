//
// Created by Administrator on 2018/8/25.
//

#ifndef CP10_BRASS_H
#define CP10_BRASS_H

#include <iostream>
#include <string>

using namespace ::std;

class Brass {
private:
    string fullName;
    long accountNum;
    double balane;
public:
    Brass(const string &fn = "NoAccount", const long an = -1, double bal = 0.f);

    void Deposit(double acc);

    virtual void Withdraw(double amt);

    double Balance() const;

    virtual void ViewAcct();

    virtual ~Brass();

};


class BrassPlus : public Brass {
private :
    double maxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus(const string &fn = "NoAccount", const long an = -1, double bal = 0.0, double ml = 500,
              double rl = 0.1125);

    BrassPlus(const Brass &ba, double ml = 500, double rl = 0.1125);

    virtual void ViewAcct() const;

    virtual void WithDraw(double amt);

    void resetMax(double m) { maxLoan = m; }

    void resetRate(double r) { rate = r; }

    void resetOwes() {
        owesBank = 0;
    }
};


#endif //CP10_BRASS_H
