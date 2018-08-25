//
// Created by Administrator on 2018/8/14.
//

#ifndef CP10_VERCTOR_H
#define CP10_VERCTOR_H

#include <iosfwd>

namespace VERCTOR {
    class Verctor {
    public :
        enum MODE {
            RECT, POL
        };
    private:
        double x;
        double y;
        double mag;
        double ang;
        MODE mode;

        void setX();

        void setY();

        void setMag();

        void setAng();

        void setMode();

    public:
        Verctor();

        Verctor(double n1, double n2, MODE md);

        ~Verctor();

        void reset(double n1, double n2, MODE md);

        double getX() { return x; }

        double getY() { return y; }

        double getAng() { return ang; }

        double getMag() { return mag; }

        MODE getMode() { return mode; }

        void rectMode();

        void polMode();

        Verctor operator+(const Verctor &v) const;

        Verctor operator-(const Verctor &v) const;

        Verctor operator-() const;

        Verctor operator*(int n) const;

        friend Verctor operator*(int n, const Verctor &v) {
            return v * n;
        }

        friend std::ostream &operator<<(std::ostream &os, const Verctor &v);
    };
}


#endif //CP10_VERCTOR_H
