//
// Created by Oleg Shehter on 2019-01-15.
//

#include "rectangle.h"

Rectangle::Rectangle(Point a, Point b) {
    this->height = a.getY() > b.getY()? a.getY()-b.getY() : b.getY()-a.getY();
    this->width = a.getX() > b.getX()? a.getX()-b.getX() : b.getX()-a.getX();

    this->x = a;
    this->y = b;
}

double Rectangle::getArea() const {
    return height*width;
}

double Rectangle::getPerim() const {
    return 2*height+2*width;
}

int Rectangle::getHeight() {
    return this->height;
}

int Rectangle::getWidth() {
    return this->width;
}