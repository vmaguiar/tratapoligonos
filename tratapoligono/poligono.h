#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"
/**
 * @brief The Poligono class representa um poligono regular em um plano cartesiano
 */
class Poligono : public Point
{
private:
    /**
     * @brief vertice vetor de pontos q formam os vertices do poligono
     */
    Point vertice[100];
    /**
     * @brief nvertices é o numero total de vertices que o poligono possui
     */
    int nvertices = 0;
public:
    /**
     * @brief Poligono contrutor padrão criado pela class
     */
    Poligono();
    /**
     * @brief Poligono destrutor padrão criado pela class
     */
    ~Poligono();
    /**
     * @brief inserir função que insere pares ordenados para a formação de vertices em sentido anti-horario
     * @param x coordenada x do vertice
     * @param y coordenada y do vertice
     */
    void inserir(float x, float y);
    /**
     * @brief area função calcula a area do poligono formado
     * @return o valor da area
     */
    float area();
    /**
     * @brief centroG função calcula o centro de gravidade do poligono
     * @return valor do centro em formato de ponto no plano
     */
    Point centroG();
    /**
     * @brief rotaciona função rotaciona em o poligono em relação a um ponto em um angulo qualquer
     * @param angulo angulo de rotação, positivo anti-horario, e negativo para horario
     * @param a coordenada x do ponto de referencia
     * @param b coordenada y do ponto de referencia
     */
    void rotaciona(double angulo, float a, float b);
    /**
     * @brief translada função translada o poligono somando a todos os vertices um ponto
     * @param a coordenada x do ponto de translação
     * @param b coordenada y do ponto de translação
     */
    void translada(float a, float b);
    /**
     * @brief imprime em ordem anti-horaria os vertices que formam o poligono
     */
    void imprime();
};

#endif // POLIGONO_H
