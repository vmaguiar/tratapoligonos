#include "retangulo.h"
#include "poligono.h"
#include "point.h"
#include <iostream>
#include <cmath>

Retangulo::Retangulo(float x, float y, float altura, float largura){
// tem q denotar a cordenada (x,y) do canto superior esquerdo do retangulo
//e sua largura e altura
// e a subclasse deve utilizar as operações da superclass para armazenar tudo interno do retangulo
inserir(x,y);
inserir(x,(y-altura));
inserir((x+largura), (y-altura));
inserir((x+largura), y);
this-> largura = largura;
this-> altura = altura;
}
Retangulo::~Retangulo(){

}
