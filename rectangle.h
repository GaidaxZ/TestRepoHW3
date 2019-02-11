//
// Created by Oleg Shehter on 2019-01-15.
//

#ifndef HOMEWORK3_RECTANGLE_H
#define HOMEWORK3_RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape{
public:
    Rectangle (Point a, Point b);
    int getHeight();
    int getWidth();
    double getArea() const;
    double getPerim() const;

private:
    Point x, y;
    int height;
    int width;
};

#endif //HOMEWORK3_RECTANGLE_H
