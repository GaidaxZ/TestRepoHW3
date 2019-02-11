//
// Created by Oleg Shehter on 2019-01-15.
//

#ifndef HOMEWORK3_POINT_H
#define HOMEWORK3_POINT_H

#pragma once

class Point {
public:
    Point(int x = 0, int y = 0);
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);

private:
    int x, y;
};

#endif //HOMEWORK3_POINT_H
