//
// Created by drews on 3/19/2021.
//
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

bool testShape();
bool testRectangle();
bool testPoint();
bool testCircle();

int main(){
    if(testShape()){
        cout << "All test casses for Shape passed" << endl;
    }
    if(testRectangle()){
        cout << "All test casses for Rectangle passed" << endl;
    }
    if(testPoint()){
        cout << "All test casses for Point passed" << endl;
    }
    if(testCircle()){
        cout << "All test casses for Circle passed" << endl;
    }

    return 0;
}

bool testShape(){
    bool passed = true;
    // shape can only be accessed though its child class rectangle
    Rectangle r(-1, -1);
    if(r.getHeight() != 10 && r.getWidth() != 10){
        passed = false;
        cout << "FAILED test case negaive input for setheight or width" << endl;
    }

    return passed;
}

bool testRectangle(){
    bool passed = true;
    // write test case for get area
    Rectangle r(10, 8);
    if(r.getArea() != 80){
        passed = false;
        cout << "FAILED test case for rectangle area" << endl;
    }

    // write test case for setisrect
    if(!(r.getIsRect())){
        passed = false;
        cout << "FAILED test case for isRect" << endl;
    }

    // write test case for getpoint for out of bouds index
    r.findPoints();
    Points p;
    if(r.getPoint(27) != p){
        passed = false;
        cout << "FAILED test case for out of bouds getpoint search" << endl;
    }

    return passed;
}

bool testPoint(){
    bool passed = true;
    // negative input for constructor
    Points p(-1, -1);
    Points p2;
    if(!(p == p2)){
        passed = false;
        cout << "FAILED test case for negative input to constructor" << endl;
    }

    return passed;
}

bool testCircle(){
    bool passed = true;
    // write test case for negative input for constructor
    Circle c(-1);
    if(c.getRadius() != 10){
        passed = false;
        cout << "FAILED negative constructor input" << endl;
    }

    // write test case for find area
    if(c.findArea() != 314){
        passed = false;
        cout << "FAILED area test case" << endl;
    }

    return passed;
}
