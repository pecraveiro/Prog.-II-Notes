/* -----------------------------------------------
   Trabalho - T1 - Unidade 01 - Introdução ao C++
   Aluno: Pedro Muhamad Suleiman Craveiro
   Matrícula: 20204443
   Universidade UFSC - Campus Araranguá
   -----------------------------------------------
*/

// O programa é um gerenciador de arquivos em disco que contém opções citadas nas alternativas do menu.

#include <iostream>
#include <vector>
#include <string> // *Pesquisar dps. Acredito que com a iostream não precisa incluir a biblioteca <string>
#include <fstream> // Define várias classes que dão suporte a operações de iostreams em sequências armazenadas em arquivos externos.

using namespace std;

int main() {

    // Menu elaborado
    for(;;) // ;; representa um loop infinito
    {
    // Menu elaborado
    cout << "----------------------------------------" << endl;
    cout << "FILE MANIPULATOR HACK" << endl;
    cout << "1 - Open a file..." << endl;
    cout << "2 - Search for substrings..." << endl;
    cout << "3 - Remove words containg a substring..." << endl;
    cout << "4 - Remove all repeated words" << endl;
    cout << "5 - Show statistics" << endl << endl;
    cout << "6 - Exit the program" << endl;  
    cout << "----------------------------------------" << endl;

    char answer;
    cout << "Enter with an option: "; // User input
    cin >> answer; // User output
    cout << endl;

    if(answer == '1')
    {
    
        continue; 
    }

    if(answer == '2')
    {
    
        continue; 
    }

    if(answer == '3')
    {
    
        continue; 
    }

    if(answer == '4')
    {
    
        continue; 
    }

    if(answer == '5')
    {
    
        continue; 
    }

    if(answer == '6')
    {
    
        break; 
    }
    } // Fecha o loop for
    cout << "entrei no loop e sai";
    return 0;
} // Fecha a função main
