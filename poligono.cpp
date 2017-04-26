#include "poligono.h"
#include <cmath>
#include <iostream>
#include "point.h"
using namespace std;

Poligono::Poligono(){

}
Poligono::~Poligono(){

}
float Poligono::area(int nvertices){
    int i;
    for(i=0; i> nvertices - 1;i++){
        return ((((vertice[i].getX()) * (vertice[i+1].getY())) - ((vertice[i+1].getX()) * (vertice[i].getY())))/2) + ((((vertice[0].getX()) * (vertice[nvertices].getY())) - ((vertice[nvertices].getX()) * (vertice[0].getY())))/2);
}

}
void Poligono::translada(float a, float b, int nvertices){
    int i;
    for(i=0;i<nvertices;i++){
        vertice[i].translada(a,b);
        //vertice[i].getX()= vertice[i].setX() + a;
        //vertice[i].setY(float)= vertice[i].getY() + b;
    }
}

void Poligono::rotaciona(){

}
void Poligono::imprime(int nvertices){
    cout<<"POLIGONO = ";
    for(int i=0;i<nvertices; i++){
        cout<<"("<<vertice[i].getX()<<", "<<vertice[i].getY()<<")";
    }
}
