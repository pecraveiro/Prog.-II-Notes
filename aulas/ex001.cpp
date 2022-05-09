// Criar um programa que realiza a leitura "cin" de palavras (sem espaço, string, vector)

#include <iostream>
#include <vector>
#include <string> // Acredito que com a iostream não precisa incluir a biblioteca <string>
#include <fstream> // Define várias classes que dão suporte a operações de iostreams em sequências armazenadas em arquivos externos.

using namespace std;

void PrintList(const vector<string> &List);
bool RemoveString(string str, vector<string> &List);
bool SaveDatabase(string path, const vector<string> &List);
bool LoadDatabase(string path, vector<string> &List);

int main() // Função main
{
    // Vector
    vector<string> listOfWords;
    LoadDatabase("database.dat", listOfWords);
        
    
    // Declaração de variáveis
    int index;
    
    // Menu elaborado
    for(;;)
    {
    cout << "------------------------------" << endl;
    cout << "UFxC String Store V.0" << endl;
    cout << "1 - Insert string" << endl;
    cout << "2 - Print index and string" << endl;
    cout << "3 - Search string (literal)" << endl;
    cout << "4 - Search substrings" << endl;
    cout << "5 - Remove string" << endl;
    cout << "6 - Remove by substrings (all occurences)" << endl << endl; // 2 endl - Para pular 2 linhas    
    cout << "0 - Quit" << endl;
    cout << "------------------------------" << endl;
    
    
    char ch;
    cout << "Enter with an option: "; // User input
    cin >> ch; // User output
    cout << endl;
    
    if(ch == '1')
    {
        cout << "Enter with a string: ";
        string word;
        cin >> word;
        cout << endl;
        listOfWords.push_back(word);
        continue;
    }
    
    if(ch == '2')
    {
        PrintList(listOfWords);
        continue; 
    }
    
    if(ch == '3')
    {
        
        continue;
    }
    
    if(ch == '4')
    {
        continue;
    }
    
    if(ch == '5')
    {
        cout << "Enter with a word to remove: ";
           string str;
           cin >> str;
           if(!RemoveString(str, listOfWords))
                cout << endl << "Nothing to remove" << endl;
           continue;
    }
    
    if(ch == '6')
    {
        continue;
    }
    
    if(ch == '0')
    {
        SaveDatabase("database.dat", listOfWords); // Quando finalizar ele salva os dados
        break;
    }

} // Fecha o loop
    return 0;
} // Fecha a função main

void PrintList(const vector<string> &List) {
    for(size_t i=0; i < List.size(); i++)
    {
        cout << "Index: " << i << " - Word: " << List.at(i) << " - Size: " << List.at(i).length() << endl;
    }
} // Fecha a função

bool RemoveString(string str, vector<string> &listOfWords) {
    // se não permitir repetições
    /*
    for(size_t i=0; i<listOfWords.size(); i++)
    {
        if(str == listOfWords.at(i))
        {
            listOfWords.erase(listOfWords.begin()+i);
            return true;
        }
    }
    return false;
    */
    
    // Versão que resolve o problema e ocorrência de palavras repetidas
    
    size_t i=0;
    bool hasErase = false;
    while(i < listOfWords.size())
    {
        if(listOfWords.at(i) == str)
        {
        hasErase = true;
        }
    else
        i++;
}
    return hasErase;
} // Fecha a função RemoveString

bool SaveDatabase(string path, const vector<string> &List) {
    ofstream FileWriter(path);
    
    if(FileWriter.is_open() == false)
    {
        cout << "Error, file not loaded." << endl;
        return false;
        
    }
    else
    {
        for(size_t i=0; i<List.size(); i++)
        {
            FileWriter << List.at(i) << endl;
        }
    }
    
    FileWriter.close();
    return true;
} // Fecha a função SaveDatabase

bool LoadDatabase(string path, vector<string> &List) {
    ifstream FileReader(path);
    
    if(FileReader.is_open() == false)
    {
        cout << "Cannot open file" << endl;
        return false;
    }
    else
    {
        string str;
        while(getline(FileReader, str))
        {
            List.push_back(str);
        }
    }
    
    FileReader.close();
    return true;
} // Fecha a função LoadDatabase

// Teoria da aula:
// cout << são operadores, operadores são funções.
// for(;;) laço de repetição infinito.
// Anotações da última aula
