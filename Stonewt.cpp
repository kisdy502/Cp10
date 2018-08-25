//
// Created by Administrator on 2018/8/16.
//

#include <iostream>
#include "Stonewt.h"

Stonewt::Stonewt() {
    stone = pds_left = pounds = 0;
}

Stonewt::Stonewt(double lbs) {
    stone = (int) lbs / Lbs_per_stn;
    pds_left = (int) lbs % Lbs_per_stn + lbs - (int) lbs;
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs) {
    stone = stn;
    pds_left = lbs;
    pounds = stone * Lbs_per_stn + lbs;
}

void Stonewt::showLbs() const {
    std::cout << "pounds:" << pounds << std::endl;
}

void Stonewt::showStn() const {
    std::cout << "stone:" << stone << ",pounds:" << pds_left << std::endl;
}

Stonewt::~Stonewt() {

}