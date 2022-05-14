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
#include <string> 
#include <fstream> // Define várias classes que dão suporte a operações de iostreams em sequências armazenadas em arquivos externos.

using namespace std;

int main() {

    //vector<vector<string>>Lista; // Lista dos arquivos

    vector<pair<string, vector<string>>> Lista; // Lista dos arquivos (Lista de objetos pararelos)

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
        int whichFile; // Definição de variável
        cout << "Which file? Enter number to open an file: 1, 2 or 3: "; // User input
        cin >> whichFile; // User output
        cout << endl;
        ifstream file; // O Programa precisa desse método para abrir o arquivo
        string line;

            if (whichFile == 1) // Caso o usuário digite 1, o arquivo 1 será aberto e printado na tela.
            {
                file.open ("text1.txt");
                    if(file.is_open()){ // Verificar se o arquivo foi aberto
                    cout << "Text inside the file: " << endl;
                        while(getline(file, line))
                            { // O programa irá ler linha por linha
                            cout << line << endl;
                            }
                    }
                    else {
                        cout << "The computer can't find the file." << endl;
                    }
            }

            else if (whichFile == 2)
            {
                file.open ("text2.txt");
                    if(file.is_open()){ // Verificar se o arquivo foi aberto
                    cout << "Text inside the file: " << endl;
                        while(getline(file, line))
                            { // O programa irá ler linha por linha
                            cout << line << endl;
                            }
                    }
                    else {
                        cout << "The computer can't find the file." << endl;
                    }
            }

            else if (whichFile == 3)
            {
                file.open ("text3.txt");
                    if(file.is_open()){ // Verificar se o arquivo foi aberto
                    cout << "Text inside the file: " << endl;
                        while(getline(file, line))
                            { // O programa irá ler linha por linha
                            cout << line << endl;
                            }
                    }
                    else {
                        cout << "The computer can't find the file." << endl;
                    }
            }

            else
            {
            cout << "The number is not a valid file. Please type another number next time." << endl;
            }        
        continue; 
    }

    if(answer == '2')
    {   
        /* // Declaração de variáveis dos 3 textos utilizados para a análise
        string str1 ("Amo jogar bola e brincar na neve.");
        string str2 ("Desde criança eu jogo bola.");
        string str3 ("Ganhei uma bola no meu aniversário.");
        // User input
        string hasFound;
        cout << "Enter a possible word to verify if is in the text: " << endl;
        // User output
        cin >> hasFound;
            while(getline(list, hasFound))
            {
                
            }
        */
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

