//
// Created by Administrator on 2018/8/25.
//

#ifndef CP10_RATEDPLAYER_H
#define CP10_RATEDPLAYER_H

#include "TabaletennisPlayer.h"

class RatedPlayer : public TabaletennisPlayer {
private:
    unsigned int rating;
public:
    RatedPlayer(const string& fn, const string& ln, bool ht = false);

    RatedPlayer(unsigned int r, const TabaletennisPlayer &tp);

    unsigned int Rating() const {
        return rating;
    }

    void resetRating(const int r) {
        rating = r;
    }

};


#endif //CP10_RATEDPLAYER_H
