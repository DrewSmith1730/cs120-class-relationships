//
// Created by drews on 3/19/2021.
//
#include "Points.h"
using namespace std;

Points::Points() : x(0), y(0){}

Points::Points(int x) : y(0){
    setX(x);
}

Points::Points(int x, int y) {
    setX(x);
    setY(y);
}

int Points::getX() const{
    return x;
}

int Points::getY() const {
    return y;
}

void Points::setX(int x) {
    if(x < 0){
        this->x = 0;
    } else {
        this->x = x;
    }
}

void Points::setY(int y) {
    if(y < 0){
        this->y = 0;
    } else {
        this->y = y;
    }
}

ostream& operator << (ostream& outs, const Points& q){
    outs << "The point is: (" << q.x << "," << q.y << ")" << endl;
    return outs;
}

bool operator == (const Points &rhs, const Points &lhs){
    if(rhs.getX() == lhs.getX() && rhs.getY() == lhs.getY()){
        return true;
    } else {
        return false;
    }
}

bool operator != (const Points &rhs, const Points &lhs){
    if(rhs.getX() != lhs.getX() || rhs.getY() != lhs.getY()){
        return false;
    } else {
        return true;
    }
}