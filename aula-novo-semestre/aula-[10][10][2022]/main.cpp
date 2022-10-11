// aula-[10][10][2022]
// CONSTRUTORES E DESTRUTORES

#include <iostream>
#include "person.hpp"

using namespace std;

int main()
{
    Person p1;
    Person p2("Antonio");
    Person p3("Ricardo", "Rua Angeloni Estrela");
    Person p4("Pedro", "Avenida Afonso Pena", 21, 72.5, 1.80);
    
    //p2.ShowInfo();
    //p3.ShowInfo();
    p4.ShowInfo();
    
    return 0;
}