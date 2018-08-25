//
// Created by Administrator on 2018/8/14.
//

#include <iostream>
#include <cmath>
#include "Verctor.h"

namespace VERCTOR {

    const double Rad_to_deg = 45.0 / atan(1.0);

    Verctor::Verctor() {
        x = y = ang = mag = 0;
        mode = RECT;
    }

    Verctor::Verctor(double n1, double n2, MODE md) {
        mode = md;
        if (md == RECT) {
            x = n1;
            y = n2;
            setMag();
            setAng();
        } else if (md == POL) {
            mag = n1;
            ang = Rad_to_deg;
            setX();
            setY();
        } else {
            std::cout << "error param MODE:" << md << std::endl;
            x = y = ang = mag = 0;
            mode = RECT;
        }
    }

    Verctor::~Verctor() {
//        std::cout << "bye bye class Verctor" << std::endl;
    }


    void Verctor::reset(double n1, double n2, MODE md) {
        mode = md;
        if (md = RECT) {
            x = n1;
            y = n2;
            setMag();
            setAng();
        } else if (md = POL) {
            mag = n1;
            ang = Rad_to_deg;
            setX();
            setY();
        } else {
            std::cout << "error param MODE:" << md << std::endl;
            x = y = ang = mag = 0;
            mode = RECT;
        }
    }

    void Verctor::setMag() {
        mag = sqrt(x * x + y * y);
    }

    void Verctor::setAng() {
        if (x == 0 || y == 0) {
            ang = 0;
        } else {
            ang = atan2(y, x);
        }
    }

    void Verctor::polMode() {
        mode = POL;
    }

    void Verctor::rectMode() {
        mode = RECT;
    }

    void Verctor::setX() {
        x = mag * cos(ang);
    }

    void Verctor::setY() {
        y = mag * sin(ang);
    }

    Verctor Verctor::operator+(const Verctor &v) const {
        return Verctor(x + v.x, y + v.y, mode);
    }

    Verctor Verctor::operator-(const Verctor &v) const {
        return Verctor(x - v.x, y - v.y, mode);
    }

    Verctor Verctor::operator-() const {
        return Verctor(-x, -y, mode);
    }

    Verctor Verctor::operator*(int n) const {
        return Verctor(n * x, n * y, mode);
    }

    std::ostream &operator<<(std::ostream &os, const Verctor &v) {
        os << "x:" << v.x << ",y:" << v.y << ",ang:" << v.ang << ",mag:" << v.mag;
        if (v.mode == Verctor::RECT) {
            os << ",mode:RECT";
        } else if (v.mode == Verctor::POL) {
            os << ",mode:POL";
        } else {
            os << ",mode:UNKNOW";
        }
        os << std::endl;
        return os;
    }


}