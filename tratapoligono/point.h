#ifndef POINT_H
#define POINT_H

/**
 * @brief The Point class representa um ponto em um plano cartesiano
 */
class Point{
public:
    /**
     * @brief Point contrutor padrão criado pela class
     */
    Point();
    /**
      *@brief ~Point destrutor padrão criado pela class
      */
    ~Point();
    /**
     * @brief Point construtor
     * @param a inicialização do primeiro elemento do par ordenado
     * @param b inicialização do segundo elemento do par ordenado
     */
    Point(float a, float b);
    /**
     * @brief getX função para receber o valor armazenado na coordenada x
     * @return valor atual da coordenada
     */
    float getX();
    /**
     * @brief setX função para atribuir valor a primeira coordenada (x) que é private
     * @param val o valor
     */
    void setX(float val);
    /**
     * @brief getY função para receber o valor armazenado na coordenada y
     * @return valor atual da coordenada
     */
    float getY();
    /**
     * @brief setY função para atribuir valor a segunda coordenada (y) que é private
     * @param val o valor
     */
    void setY(float val);
    /**
     * @brief setXY função para atribuir valores as duas coordenada (x e y) que são private
     * @param x valor da primeira coordenada
     * @param y valor da segunda coordenada
     */
    void setXY(float x, float y);
    /**
     * @brief add função para somar dois pares ordenado, dois pontos
     * @param p ponto a ser somado
     */
    void add(Point p);
    /**
     * @brief sub função para somar dois pares ordenados, dois pontos , sendo um deles negativo
     * @param p ponto negativo a ser somado
     */
    void sub(Point p);
    /**
     * @brief norma função indica a magnetude do ponto, ou a distancia ate a origem
     * @return valor da distancia
     */
    float norma();
    /**
     * @brief imprime função imprime na tela o ponto desejado
     */
    void imprime();
    /**
     * @brief translada função adiciona a cada coordenada um escalar para mudar a posição do ponto
     * @param a escalar referente a coordenada x
     * @param b escalar referente a coordenada y
     */
    void translada(float a, float b);
private:
    /**
     * @brief x coordenada x do ponto
     */
    float x;
    /**
     * @brief y coordenada y do ponto
     */
    float y;
};

#endif // POINT_H
