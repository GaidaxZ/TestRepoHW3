//
// Created by Oleg Shehter on 2019-01-20.
//

#include "shape.h"

class Circle: public Shape{
public:
    Circle(Point x, int radius);
    double getArea() const;
    double getPerim() const;

private:
    Point x;
    int radius;
};