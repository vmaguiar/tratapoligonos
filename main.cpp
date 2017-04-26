#include <iostream>
#include "Point.h"
#include <cmath>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Point p1,p2;
    p1.setXY(2,5);
    p2.setXY(1,3);
    cout<<"ponto 1 = "; p1.imprime(); cout<<endl;
    cout<<"ponto 2 = "; p2.imprime(); cout<<endl;
    p1.add(p2);
    cout<<"ponto 2 + ponto 1 = "; p1.imprime(); cout<<endl;
    cout<<"ponto 2 continua = "; p2.imprime(); cout<<endl;
    cout << "Norma de p1: "<<p1.norma()<<endl;
    cout << "Norma de p2: "<<p2.norma()<<endl;
    return 0;
}
