//
// Created by drews on 3/19/2021.
//
#include "Circle.h"

Circle::Circle() : radius(0){}

Circle::Circle(int r) {
    setRadius(r);
}

int Circle::getRadius() {
    return radius;
}

void Circle::setRadius(int r) {
    if (r < 0) {
        radius = 10;
    } else {
        radius = r;
    }
}

float Circle::findArea() {
    return (PIE * pow(radius, 2));
}

