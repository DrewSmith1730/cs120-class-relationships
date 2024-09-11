//
// Created by drews on 3/19/2021.
//
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle() {
    setHeight(10);
    setWidth(10);
    setIsRectangle();
}

Rectangle::Rectangle(int w, int h) {
    setHeight(h);
    setWidth(w);
    setIsRectangle();
}

bool Rectangle::getIsRect() {
    return isRect;
}

int Rectangle::getWidth() {
    return width;
}

int Rectangle::getHeight() {
    return height;
}

Points Rectangle::getPoint(int index) {
    if(index < 0 || index < p.size()){
        Points d;
        return d;
    }
    return p[index];
}

int Rectangle::getArea() {
    return width * height;
}

int Rectangle::getPerimetor() {
    return (width * 2) + (height * 2);
}

void Rectangle::setIsRectangle() {
    if(width != height){
        isRect = true;
    } else {
        isRect = false;
    }
}

void Rectangle::findPoints() {
    Points p1;
    Points p2(width);
    Points p4(width, height);
    Points p3(0, height);
    p.push_back(p1);
    p.push_back(p2);
    p.push_back(p3);
    p.push_back(p4);
}