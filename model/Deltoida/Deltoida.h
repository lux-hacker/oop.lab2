#ifndef UNTITLED1_DELTOIDA_H
#define UNTITLED1_DELTOIDA_H

#include <string>

namespace line{
    class Deltoida{
        double R, r;
    public:
        Deltoida();
        explicit Deltoida(double);
        Deltoida(const Deltoida&);

        Deltoida &operator= (const Deltoida&);

        void setRadius(double);
        [[nodiscard]] double getRadius() const;
        [[nodiscard]] double getLengthTangent() const;
        [[nodiscard]] double getLengthLine() const;
        [[nodiscard]] double getSquare() const;
        [[nodiscard]] double getXCoord(double) const;
        [[nodiscard]] double getYCoord(double) const;
        [[nodiscard]] static std::string getEquation();

        friend std::ostream &operator<< (std::ostream &out, const line::Deltoida&);
        friend std::istream &operator>> (std::istream &in, line::Deltoida&);
    };

    std::ostream &operator<< (std::ostream &out, const line::Deltoida&);
    std::istream &operator>> (std::istream &in, line::Deltoida&);
}

#endif //UNTITLED1_DELTOIDA_H
