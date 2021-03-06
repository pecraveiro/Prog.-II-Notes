// Exercício 003 - "Ler um arquivo de texto com ifstream, carctere a caractere, e armazenar com stringstream"
// Implementar com pair ou tuple m algoritmo que forneça a quantidade de carteres de cada tipo.
// Apresentar uma lista em ordem decrescente pelo número de caracteres.

#include <iostream>
#include <fstream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
   ifstream fileReader("manuscript1.txt");
   if(!fileReader.is_open())
   {
       cout << "Error, file not found." << endl;
       return 1;
   }
   
   vector<pair<unsigned char, size_t>> FreqListch;
   char ch;
   while(fileReader.get(ch))
   {
    cout << ch;
       
        bool hasfound=false;
        for(size_t i=0; i<FreqListch.size(); i++)
        {
           if(FreqListch.at(i).first == ch)
            hasfound=true;
           break;
            
        }
       
       // insere um novo elemento na lista caso não tenha sido encontrado no laço anterior
       if(!hasfound)
       pair<unisgned char, size_t> newpair;
       newpair.first = ch;
       newpair.second = 1;
       
       FreqListch.push_back(newpair);
   } // Fecha o while
   

    fileReader.close();
    
    return 0;
} // Fecha a função main
