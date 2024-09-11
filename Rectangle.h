#ifndef M2OEP_CLASS_RELATIONSHIPS_RECTANGLE_H
#define M2OEP_CLASS_RELATIONSHIPS_RECTANGLE_H
#include "Shape.h"
#include "Points.h"
#include <vector>
#include <iostream>
#include <optional>
class Rectangle : Shape {
public:
    Rectangle();
    Rectangle(int w, int height);

    bool getIsRect();
    int getWidth();
    int getHeight();
    Points getPoint(int index);

    virtual int getArea() override;
    virtual int getPerimetor() override;

    void setIsRectangle();

    void findPoints();

protected:
    bool isRect;
    std::vector<Points> p;

};

#endif //M2OEP_CLASS_RELATIONSHIPS_RECTANGLE_H
