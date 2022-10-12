#include "Deltoida.h"
#include <cmath>
#include <iostream>

namespace line{
    Deltoida::Deltoida(double r) {
        if(r < 0)
            throw std::invalid_argument("Radius cannot be negative");
        this->r = r;
        this->R = 3*this->r;
    }

    void Deltoida::setRadius(double d) {
        if(d < 0)
            throw std::invalid_argument("Radius cannot be negative");
        this->r = d;
        this->R = 3*this->r;
    }

    double Deltoida::getRadius() const {
        return this->r;
    }

    double Deltoida::getLengthTangent() const {
        return 4*this->R / 3;
    }

    double Deltoida::getLengthLine() const {
        return 16*this->R / 3;
    }

    double Deltoida::getSquare() const {
        return 2 * M_PI * this->R * this->R / 9;
    }

    Deltoida::Deltoida() {
        this->R = 0;
        this->r = 0;
    }

    Deltoida::Deltoida(const Deltoida &other) {
        this->R = other.R;
        this->r = other.r;
    }

    Deltoida &Deltoida::operator=(const Deltoida &other) = default;

    double Deltoida::getXCoord(double t) const {
        return 2*this->r*cos(t/3)/3 + this->r*cos(2*t/3)/3;
    }

    double Deltoida::getYCoord(double t) const {
        return 2*this->r*sin(t/3)/3 - this->r*sin(2*t/3)/3;
    }

    std::string Deltoida::getEquation() {
        return "(x^2 + y^2)^2 + 18(x^2 + y^2) = 8x^3 - 24xy^2 + 27";
    }

    std::ostream &operator<< (std::ostream &out, const line::Deltoida& d){
        out << "Deltoida(r=" << d.r << ")";
        return out;
    }

    std::istream &operator>> (std::istream &in, line::Deltoida& d){
        in >> d.r;
        return in;
    }

}