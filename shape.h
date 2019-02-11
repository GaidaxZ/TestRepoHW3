//
// Created by Oleg Shehter on 2019-01-15.
//

#ifndef HOMEWORK3_SHAPE_H
#define HOMEWORK3_SHAPE_H

#include "point.h"

class Shape{
public:
    Shape();
    virtual double getArea() const = 0;
    virtual double getPerim() const = 0;
};

#endif //HOMEWORK3_SHAPE_H
