//
// Created by Administrator on 2018/8/13.
//

#include <iostream>
#include "Stock0.h"


Stock0::Stock0(const std::string &co, long num, double price) {
    company = co;
    if (num < 0) {
        std::cout << "stock shares must bigger than zero" << std::endl;
        shares = 0;
    }
    shares = num;
    share_val = price;
    set_total();
}

void Stock0::accquire(const std::string &co, long num, double price) {
    company = co;
    if (num < 0) {
        std::cout << "stock shares must bigger than zero" << std::endl;
        shares = 0;
    }
    shares = num;
    share_val = price;
    set_total();
}

void Stock0::update(double price) {
    if (price > 0) {
        share_val = price;
        set_total();
        std::cout << "total stock value:" << total_val << std::endl;
    } else {
        std::cout << "stock price must bigger than zero" << std::endl;
    }
}

void Stock0::buy(long num, double price) {
    if (num > 0 && price > 0) {
        shares += num;
        share_val = price;
        set_total();
    } else {
        std::cout << "stock you wan buy or the price must bigger than zero" << std::endl;
    }
}


void Stock0::sell(long num, double price) {
    if (num > 0 && price > 0 && num <= shares) {
        shares -= num;
        share_val = price;
        set_total();
    } else if (num < 0 || price < 0) {
        std::cout << "stock you wan't sell or price  must bigger than zero" << std::endl;
    } else {
        std::cout << "sale count must smaller than you have" << std::endl;
    }
}


void Stock0::show() {
    using std::cout;
    using std::ios_base;
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize streamsize = cout.precision(3);

    std::cout << "your company:" << company
              << ",\nshares:" << shares
              << ",\nshare_val: $ " << share_val
              << ",\ntotal: $ " << total_val << std::endl;

    cout.setf(orig, ios_base::floatfield);
    cout.precision(streamsize);
}


Stock0::~Stock0() {
    std::cout << "Stock0 bye bye!" << std::endl;
}