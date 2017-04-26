#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"
#include "point.h"
/**
 * @brief The Retangulo class herda funçoes de poligono e forma um retangulo com a penas um ponto, sua altura e sua largura
 */
class Retangulo : public Poligono {
private:
    /**
 * @brief largura e altura valores da largura e da altura do retangulo formado
 */
float largura, altura;
public:
/**
     * @brief Retangulo construtor que recebe um ponto e dois valores para a formação dos vertices do retangulo
     * @param x coordenada x do ponto superior esquerdo do retangulo
     * @param y coordenada y do ponto superior esquerdo do retangulo
     * @param altura a altura do retangulo passada
     * @param largura largura do retangulo passada
     */
    Retangulo(float x, float y, float altura, float largura);
    /**
 * @brief destrutor padrão criado pela class
 */
    ~Retangulo();
};

#endif // RETANGULO_H
