#include <iostream>
#include "Point.h"
#include "poligono.h"
#include "retangulo.h"
#include <cmath>
using namespace std;

int main()
{
    Point p1,p2;
    p1.setXY(2,5);
    p2.setXY(1,3);
    cout<<"----- TESTE PONTO -----"<<endl;
    cout<<"ponto 1 = "; p1.imprime(); cout<<endl;
    cout<<"ponto 2 = "; p2.imprime(); cout<<endl;
    p1.add(p2);
    cout<<"ponto 2 + ponto 1 = "; p1.imprime(); cout<<endl;
    cout<<"ponto 2 continua = "; p2.imprime(); cout<<endl;
    cout << "Norma de p1: "<<p1.norma()<<endl;
    cout << "Norma de p2: "<<p2.norma()<<endl;
    p2.translada(10,10);
    cout<<"ponto 2 = "; p2.imprime();cout<<endl;
    cout<<"----- TESTANDO POLIGONO -----"<<endl;
    Poligono quadrado;
    quadrado.inserir(0,0);
    quadrado.inserir(2,0);
    quadrado.inserir(2,1);
    quadrado.inserir(0,1);
    quadrado.translada(2,0);
    quadrado.rotaciona(90,0,0);
    quadrado.imprime(); cout<<endl;
    cout<<"area do poligono = "<<quadrado.area()<<endl;
    cout<<"----- TESTE RETANGULO -----"<<endl<<"Digite as coordenadas do ponto superior esquerdo do retangulo : "<<endl;
    Retangulo ret(2,2,2,4);
    cout<<"area do retangulo = "<<ret.area()<<endl;
    ret.imprime();cout<<endl<<endl<<endl;
    //ETAPA 1.4 PROGRAMA TESTE
    cout<<"----- PROGRAMA TESTE -----"<<endl;

    Retangulo retangulo1(0,0,3,4);
    float area1, area2, area3;
    retangulo1.imprime();cout<<endl;
    area1 = retangulo1.area();
    cout<<"area do retangulo = "<<area1<<endl;
    retangulo1.translada(-3,4);
    cout<<"retangulo transladado : ";retangulo1.imprime(); cout<<endl;
    area2 = retangulo1.area();
    cout<<"area do retangulo depois da translacao = "<<area2<<endl;
    if(area1 == area2){
        cout<<"primeira area = "<<area1<<" = "<<"segunda area = "<<area2<<endl;
    }
    else{
        cout<<"as areas sao diferentes"<<endl;
        if(area1 > area2){
            cout<<"a area diminuiu"<<endl;
        }
        else{
            cout<<"a area aumentou"<<endl;
        }
    }
    Point centroide;
    float xc, yc;
    centroide = retangulo1.centroG();
    xc = centroide.getX(); yc = centroide.getY();
    retangulo1.rotaciona(30, xc, yc);
    cout<<"retangulo rotacionado : ";retangulo1.imprime();cout<<endl;
    area3 = retangulo1.area();
    cout<<"area depois da rotacao = "<<area3<<endl;
    if(area1 == area3){
        cout<<"primeira area = "<<area1<<" = "<<"terceira area = "<<area3<<endl;
    }
    else{
        cout<<"as areas sao diferentes"<<endl;
        if(area1 > area2){
            cout<<"a area diminuiu"<<endl;
        }
        else{
            cout<<"a area aumentou"<<endl;
        }
    }
}
