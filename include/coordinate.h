#ifndef COORDINATE_H
#define COORDINATE_H

struct Coordinate
{
    int m_x;
    int m_y;
    Coordinate(int x, int y): m_x(x), m_y(y) {};
    ~Coordinate() {};
};

#endif // COORDINATE_H
