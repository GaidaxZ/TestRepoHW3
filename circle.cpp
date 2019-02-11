//
// Created by Oleg Shehter on 2019-01-20.
//

#include "circle.h"
#include <math.h>

Circle::Circle(Point x, int radius) {
    this->radius = radius;
    this->x = x;
}

double Circle::getArea() const {
    return M_PI*radius*radius;
}

double Circle::getPerim() const {
    return 2*M_PI*radius;
}