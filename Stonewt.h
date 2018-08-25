//
// Created by Administrator on 2018/8/16.
//

#ifndef CP10_STONEWT_H
#define CP10_STONEWT_H


class Stonewt {
private:
    enum {
        Lbs_per_stn = 14
    };
    int stone;          // 英石
    double pds_left;
    double pounds;      //磅
public:
    Stonewt();

    explicit Stonewt(double lbs);

    Stonewt(int stn, double lbs = 0);  //default param

    ~Stonewt();

    void showLbs() const;

    void showStn() const;
};


#endif //CP10_STONEWT_H
