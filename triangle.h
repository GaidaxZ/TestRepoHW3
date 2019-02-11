//
// Created by Oleg Shehter on 2019-01-20.
//

#ifndef HOMEWORK3_TRIANGLE_H
#define HOMEWORK3_TRIANGLE_H

#include "shape.h"

class Triangle : public Shape{
public:
    Triangle (Point a, Point b, Point c);
    double getArea() const;
    double getPerim() const;

private:
    Point x, y, z;
    double xy, yz, xz;
};

#endif //HOMEWORK3_TRIANGLE_H
