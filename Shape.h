#ifndef M2OEP_CLASS_RELATIONSHIPS_SHAPE_H
#define M2OEP_CLASS_RELATIONSHIPS_SHAPE_H


class Shape {
public:
    virtual int getArea() = 0;

    virtual int getPerimetor() = 0;

    void setWidth(int w){
        if(w < 0){
            width = 10;
        } else {
            width = w;
        }
    }

    void setHeight(int h){
        if(h < 0){
            height = 10;
        } else {
            height = h;
        }
    }

protected:
    int width;
    int height;
};

#endif //M2OEP_CLASS_RELATIONSHIPS_SHAPE_H
