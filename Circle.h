//
// Created by drews on 3/19/2021.
//

#ifndef M2OEP_CLASS_RELATIONSHIPS_CIRCLE_H
#define M2OEP_CLASS_RELATIONSHIPS_CIRCLE_H
#include <math.h>

class Circle {
public:
    Circle();
    Circle(int r);

    int getRadius();

    void setRadius(int r);

    float findArea();

    constexpr static const float PIE = 3.14;
private:
    int radius;
};

#endif //M2OEP_CLASS_RELATIONSHIPS_CIRCLE_H
