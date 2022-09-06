// Novos elementos: STRING, VECTOR, IFSTREAM, OFSTREAM

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name1, name2;
    name1 = "Joe";
    name2 = "Angela";

    string name3 = "Pedro";
    
    cout << name1 << ", " << name2 << ", " << name3 << " são os os novos inscritos na bolsa de estudos." << endl;

    string name4("Josué");
    
    cout << name4 << " está inscrito no projeto de pesquisa.";
// São várias formas de declararmos uma string.

    return 0;
}


// String é uma classe.
// #include <string>, precisamos incluir a biblioteca

// Orientação a objetos e herança
// NAME1, NAME2 SÃO OBJETOS DA CLASSE STRING 
// PORTANTO: OS OBJETOS SÃO INSTANCIADOS NA CLASSE.
