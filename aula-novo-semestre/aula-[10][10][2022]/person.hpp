#ifndef PERSON_HPP
#define PERSON_HPP

// INTERFACE
#include <iostream>

using namespace std;

// Classe mãe
class Person {
//ATRIBUTOS - geralmente em private...
private:
    string m_name;
    string m_address;
    unsigned int m_age;
    float m_height; //altura
    float m_weight; //massa
//MÉTODOS
public:
    Person(); //construtor
    Person(string name); //sobrecarga
    Person(string name, string address); //sobrecarga
    Person(string name, string address, unsigned int age); //sobrecarga
    Person(string name, string address, unsigned int age, float height, float weight); //sobrecarga

    ~Person(); //destrutor
    
    void ShowInfo();
};

#endif