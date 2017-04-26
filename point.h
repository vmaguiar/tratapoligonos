#ifndef POINT_H
#define POINT_H


class Point{
public:
    Point();
    ~Point();
    float getX();
    void setX(float val);
    float getY();
    void setY(float val);
    void setXY(float x, float y);
    void add(Point p);
    void sub(Point p);
    float norma();
    void imprime();
    void translada(float a, float b);
private:
    float x;
    float y;
};

#endif // POINT_H
