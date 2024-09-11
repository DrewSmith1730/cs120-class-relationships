//
// Created by drews on 3/19/2021.
//
#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"


using namespace std;

bool doesCircleFitInRect(Rectangle r, Circle c);

int main() {
    cout << "Hello World" << endl;
    Rectangle r(100, 100);
    if(r.getIsRect()){
        cout << "R is a rectangle and my classes work" << endl;
    }
    Points p;
    cout << p << endl;
    //r.findPoints();
    r.findPoints();
    if(r.getIsRect()){
        cout << "this is correct" << endl;
    }

    cout << r.getPoint(0) << endl;

    Circle c(3);
    float f = c.findArea();
    cout << f << endl;

    if(doesCircleFitInRect(r, c)){
        cout << "Circle fits in the rect" << endl;
    } else {
        cout << "Circle does not fit in the rect" << endl;
    }

    return 0;
}

bool doesCircleFitInRect(Rectangle r, Circle c){
    if((c.getRadius() * 2) <= r.getWidth() && (c.getRadius() * 2) <= r.getHeight()){
        return true;
    }
    return false;
}