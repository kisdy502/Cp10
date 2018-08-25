//
// Created by Administrator on 2018/8/25.
//

#include <iostream>
#include "TabaletennisPlayer.h"

TabaletennisPlayer::TabaletennisPlayer(const string &fn, const string &ln, bool ht) : firstname(fn), lastname(ln),
                                                                                      hasTable(ht) {
}

void TabaletennisPlayer::Name() const {
    std::cout << lastname << "." << firstname << std::endl;
}