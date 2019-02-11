//
// Created by Oleg Shehter on 2019-01-20.
//

#include "triangle.h"
#include <cmath>

Triangle::Triangle(Point a, Point b, Point c) {
    this->x = a;
    this->y = b;
    this->z = c;

    xy = sqrt(pow(y.getX()-x.getX(), 2) + pow(y.getY() - x.getY() ,2));
    xz = sqrt(pow(z.getX()-x.getX(), 2) + pow(z.getY() - x.getY() ,2));
    yz = sqrt(pow(y.getX()-z.getX(), 2) + pow(y.getY() - z.getY() ,2));

}

double Triangle::getArea() const {
    return (sqrt((xy + xz + yz)*(xy + xz - yz)*(xy - xz + yz)*(-xy + xz + yz)))/4;
}

double Triangle::getPerim() const {
    return xy + xz + yz;
}


