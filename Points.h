#ifndef M2OEP_CLASS_RELATIONSHIPS_POINTS_H
#define M2OEP_CLASS_RELATIONSHIPS_POINTS_H
#include <ostream>

using std::ostream;

class Points{
public:
    Points();
    Points(int x);
    Points(int x, int y);

    int getX() const;
    int getY() const;

    void setX(int x);
    void setY(int y);

    //void printPoints();

    friend ostream& operator << (ostream& outs, const Points& p);
    friend bool operator == (const Points &rhs, const Points &lhs);
    friend bool operator != (const Points &rhs, const Points &lhs);

protected:
    int x;
    int y;
};


#endif //M2OEP_CLASS_RELATIONSHIPS_POINTS_H
