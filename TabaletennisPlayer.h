//
// Created by Administrator on 2018/8/25.
//

#ifndef CP10_TABALETENNISPLAYER_H
#define CP10_TABALETENNISPLAYER_H

#include <string>

using std::string;

class TabaletennisPlayer {
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TabaletennisPlayer(const string &fn = "none", const string &ln = "none", bool ht = false);

    void Name() const;

    bool HasTable() const {
        return hasTable;
    }

    void resetTable(bool v) {
        hasTable = v;
    }

};


#endif //CP10_TABALETENNISPLAYER_H
