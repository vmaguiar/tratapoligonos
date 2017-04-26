#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

class Poligono : public Point
{
private:
    Point vertice[100];
public:
    Poligono();
    ~Poligono();
    float area(int nvertices);
    void rotaciona();
    void translada(float a, float b, int nvertices);
    void imprime(int nvertices);
};

#endif // POLIGONO_H
