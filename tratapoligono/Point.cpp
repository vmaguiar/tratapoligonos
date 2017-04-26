#include "Point.h"
#include<cmath>
#include <iostream>
using namespace std;

Point::Point(){

}

Point::~Point(){

}
void Point::translada(float a, float b){
    x=x+ a;
    y=y+ b;
}

Point::Point(float a, float b){
    x = a;
    y = b;
}

void Point::add(Point p){
    x = x + p.getX();
    y = y + p.getY();
}

void Point::sub(Point p){
    x = x - p.getX();
    y = y - p.getY();
}

void Point::setXY(float x, float y){
    this->x = x;
    this->y = y;
}

float Point::getX(){
    return x;
}
void Point::setX(float val){
    x = val;
}
float Point::getY(){
    return y;
}
void Point::setY(float val){
    y = val;
}

void Point::imprime(){
    cout<<"("<<x<<", "<<y<<")";
}

float Point::norma(){
    return sqrt(x*x+y*y);
}
