// Exercício 003 - "Ler um arquivo de texto com ifstream, carctere a caractere, e armazenar com stringstream"
// Implementar com pair ou tuple m algoritmo que forneça a quantidade de carteres de cada tipo.
// Apresentar uma lista em ordem decrescente pelo número de caracteres.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   ifstream fileReader("manuscript1.txt");
   if(!fileReader.is_open())
   {
       cout << "Error, file not found." << endl;
       return 1;
   }
   
   char ch;
   while(fileReader.get(ch))
   {
       cout << ch;
   }

    fileReader.close();
    
    return 0;
} // Fecha a função main
