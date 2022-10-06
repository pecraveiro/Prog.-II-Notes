// Implementação
#include "point2d.hpp" // nao precisa do iostream e using namespace

Point2d :: Point2d() // o método point2d recebe/herda a classe mãe Point2d
{
    cout << "Initializing points..." << endl;
    m_x = 0;
    m_y = 0;
};

void Point2d :: SetX(int value)
{
    m_x = value;
};

void Point2d :: SetY(int value)
{
    m_y = value;
};

void Point2d :: ShowInfo()
{
  cout << "O valor de X é: " << m_x << endl << "O valor de Y é: " << m_y << endl << endl;
  
};

void Point2d :: Update(int m_x, int m_y)
{
    this->m_x = m_x;
    this->m_y = m_y;
    
    this->ShowInfo();
};
