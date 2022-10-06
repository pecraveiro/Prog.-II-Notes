// Interface

#include <iostream>

using namespace std;

// Classe mãe
class Point2d
{
//criação dos objetos... todo objeto possui atributos e métodos
//atributos - estados
private:
    int m_x, m_y; // prefixo: m_
    
    
//métodos - comportamentos
public:
    //metodos construtores
    //constructor
    Point2d();
//    ~Point2d();
    
    //setters
    void SetX(int value);
    void SetY(int value);
    
    void Update(int m_x, int m_y);

    //getters
    void ShowInfo();
};

// Meu construtor é o método quando alguém cria o ponto, no caso, chama o método.
