// Vamos definir a classe mãe para todos as formas

#ifndef SHAPE_H_ // Se não está definido,...
#define SHAPE_H_ // defina:

class Shape { // Shape ou Forma é a classe mãe para todas as outras classes que vamos definir

public:
// Métodos
// Longest distance across the shape
    virtual double span() const = 0; // span = período
// The shape's area
    virtual double area() const = 0; // area = área
// Virtual -> é uma classe abstrata, ou seja, não pode ser implementado um método/atributo nessa classe
};

#endif