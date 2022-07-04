#ifndef RECTANGLE_H_ // Se não está definido,...
#define RECTANGLE_H_ // Defina...

#include "shape.h"

class Rectangle: public Shape { // a classe Retângulo herda os métodos e atributos da classe Shape
//Atributos
protected:
    double length; // Comprimento - no caso "base"
    double width; // Largura
//Métodos
public:
    Rectangle(double len, double wid);
    // Length of the longer side // Comprimento do lado mais comprido
    double span() const override; //span = período
    double area() const override; // area = área
};

#endif

// Fórmula como conhecemos: Área = Base x Altura
// Os tipos de dados float e double são usados para guardar números reais. A diferença entre eles é a precisão.
// O float tem uma precisão de 6 casas decimais e o double tem uma precisão de 10 casas decimais.