//
// Created by Administrator on 2018/8/14.
//

#ifndef CP10_MYTIME_H
#define CP10_MYTIME_H


class MyTime {
private:
    int hour;
    int minutes;
public:
    MyTime();

    MyTime(int h, int m);

    void AddMinute(int m);

    void AddHour(int h);

    void Reset(int h, int m);

    MyTime operator+(const MyTime &time) const;

    MyTime operator-(const MyTime &time) const;

    MyTime operator*(double n) const;

    friend MyTime operator*(double n, const MyTime &time) {
        return time * n;
    }

    friend std::ostream &operator<<(std::ostream &os, const MyTime &time);

    void show();
};


#endif //CP10_MYTIME_H
