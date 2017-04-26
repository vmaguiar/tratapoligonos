#include "poligono.h"
#include <cmath>
#include <iostream>
#include "point.h"
using namespace std;

Poligono::Poligono(){

}
Poligono::~Poligono(){

}
void Poligono::inserir(float x, float y){
    vertice[nvertices].setXY(x,y);
    nvertices++;
}

float Poligono::area(){
    int i;
    float soma=0, sub=0;
    for(i=0; i< nvertices-1;i++){
        soma = soma + ( vertice[i].getX() * vertice[i+1].getY());
        sub = sub + (vertice[i+1].getX() * vertice[i].getY());
    }
    soma = soma + vertice[nvertices-1].getX() * vertice[0].getY();
    sub = sub + vertice[0].getX() * vertice[nvertices-1].getY();
        return(soma-sub)/2;
}
Point Poligono::centroG(){
    float cx = 0, cy = 0, fatorArea;
    fatorArea = 1/(area() * 6);
    for(int i =0; i< nvertices-1; i++){
        cx= cx + (vertice[i].getX() + vertice[i+1].getX()) * (vertice[i+1].getY() * vertice[i].getX() - vertice[i+1].getX() * vertice[i].getY());
        cy= cy + (vertice[i].getY() + vertice[i+1].getY()) * (vertice[i+1].getY() * vertice[i].getX() - vertice[i+1].getX() * vertice[i].getY());
    }
    cx = cx * fatorArea;
    cy = cy * fatorArea;
    Point centroide(cx, cy);
    return centroide;
}

void Poligono::translada(float a, float b){
    int i;
    for(i=0;i<nvertices;i++){
        vertice[i].setX(vertice[i].getX() + a);
        vertice[i].setY(vertice[i].getY() + b);
    }
}

void Poligono::rotaciona(double angulo, float x0, float y0){
    int i;
    float a, b;
    angulo = angulo * 3.1415926535897932384626433832795/(float) 180.0;
    for(i=0;i<nvertices;i++){
        a = vertice[i].getX();
        b = vertice[i].getY();
        vertice[i].setX(cos(angulo) * (a - x0) - sin(angulo) * (b - y0) + x0);
        vertice[i].setY(sin(angulo) * (a - x0) + cos(angulo) * (b - y0) + y0);
    }
}

void Poligono::imprime(){
    cout<<"POLIGONO = ";
    for(int i=0;i<nvertices; i++){
        cout<<"("<<vertice[i].getX()<<", "<<vertice[i].getY()<<")"<<" --> ";
    }
}
