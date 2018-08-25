//
// Created by Administrator on 2018/8/25.
//

#include "RatedPlayer.h"

RatedPlayer::RatedPlayer(const string &fn, const string& ln, bool ht) : TabaletennisPlayer(fn, ln, ht) {

}

RatedPlayer::RatedPlayer(unsigned int r, const TabaletennisPlayer &tp) : TabaletennisPlayer(tp), rating(r) {

}
