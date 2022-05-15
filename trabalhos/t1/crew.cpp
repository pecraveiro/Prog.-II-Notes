#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

void PrintList(const vector<string> &List);
bool RemoveString(string str, vector<string> &List);
bool LoadFile(string filename, vector<string> &List);
bool SaveFile(string filename, const vector<string> &List);
bool Search(string str, const vector<string> &List, size_t &pos);
bool SearchSubstr(string str, const vector<string> &List, vector<size_t> &indices);
bool removeSubstr(vector<vector<string>> &List, string substr);

int main()
{
    vector<string> ListaDeArquivos;

    cout << "Select an option: " << endl;

    for(;;)
    {
        // Menu elaborado
        cout << "------------------===--------------------" << endl;
        cout << "| FILE MANIPULATOR HACK                 |" << endl;
        cout << "| 1 - Open a file...                    |" << endl;
        cout << "| 2 - Search for substrings...          |" << endl;
        cout << "| 3 - Remove words containg a substring |" << endl;
        cout << "| 4 - Remove all repeated words         |" << endl;
        cout << "| 5 - Show statistics                   |" << endl;
        cout << "|                                       |" << endl;
        cout << "| 6 - Exit the program                  |" << endl;  
        cout << "------------------===--------------------" << endl;

        // Declaração de variáveis
        char ch; // Guardar o valor que o usuário digita no menu
        cin >> ch;
        

        if(ch == '1')
        {
            cout << "Coloque o nome do seu arquivo abaixo (nos formatos adequados '.txt'): ";
            string Textos;
            cin >> Textos;
            LoadFile(Textos, ListaDeArquivos);
            PrintList(ListaDeArquivos);
            continue;
        }

        else if(ch == '2') // até aqui deu certo :)
        {
            cout << "Enter with a substring to search: ";
            string str;
            cin >> str;
            vector<size_t> indices;
            if(SearchSubstr(str, ListaDeArquivos, indices) == true)
            {
                cout << "Number of strings found: " << indices.size() << endl;
                for(size_t i=0; i<indices.size(); i++)
                {
                    cout << "Words - " << ListaDeArquivos.at(indices.at(i)) << endl;
                }
            }
            else
            {
                cout << "Substring not found." << endl;
            }
            continue;
        }

        else if(ch == '3')
        {
            cout << "Enter with a substring to remove: ";
            string str;
            cin >> str;
            removeSubstr(str, ListaDeArquivos);
            
            else
            {
                cout << "Substring not found." << endl;
            }
            continue;
        }
        
        else if(ch == '4')
        {
            cout << "Enter with a word to remove: ";
            string str;
            cin >> str;
            if(!RemoveString(str, ListaDeArquivos))
                cout << "Nothing to remove." << endl;
            continue;
            
        }
        else if(ch == '5')
        {
            
        }
        else if(ch == '6')
        {
            cout << "Our file has been created and updated." << endl;
            SaveFile("concatenation.txt", ListaDeArquivos);

            break;
        }

    }

    return 0;
} // Fecha a função main

void PrintList(const vector<string> &List)
{
    cout << "A lista de arquivos tem: " << List.size() << " arquivo(s)." << endl;
    for(size_t i=0; i<List.size(); i++)
    {
        cout << "Index: " << i << " - Words: " << List.at(i) << " - Size: " << List.at(i).length() << endl;
    }
    cout << endl;
}

bool RemoveString(string str, vector<string> &List)
{
    //resolve o problema de ocorrência de palavras repetidas
    size_t i=0;
    bool hasErase = false;
    while(i<List.size())
    {
        if(List.at(i) == str)
        {
            List.erase(List.begin() + i);
            hasErase = true;
        }
        else
            i++;
    }
    return hasErase;
}

bool SaveFile(string filename, const vector<string> &List)
{
    ofstream fileWriter(filename);
    if(fileWriter.is_open())
    {
        for(size_t i=0; i<List.size(); i++)
        {
            fileWriter << List.at(i) << endl;
        }
    }
    else
    {
        cout << "Error, cannot open file." << endl;
        return false;
    }
    fileWriter.close();
    return true;
}

bool LoadFile(string filename, vector<string> &List)
{
    ifstream fileReader(filename);
    if(fileReader.is_open())
    {
        string tmp;
        while(getline(fileReader, tmp))
        {
            List.push_back(tmp);
        }
    }
    else
    {
        cout << "Error, cannot open file." << endl;
        return false;
    }

    fileReader.close();
    return true;
}

bool Search(string str, const vector<string> &List, size_t &pos)
{
    for(size_t i=0; i<List.size(); i++)
    {
        if(List.at(i) == str)
        {
            pos=i;
            return true;
        }
    }
    return false;
}

bool SearchSubstr(string str, const vector<string> &List, vector<size_t> &indices)
{
    for(size_t i=0; i<List.size(); i++)
    {
        string word = List.at(i);
        size_t pos = word.find(str);
        if(pos < word.length())
        {
            indices.push_back(i);
        }
    }
    return true;
}

bool removeSubstr(vector<vector<string>> &List, string substr){
    bool hasfound = false;

    for (size_t i = 0; i < List.size(); i++){
        size_t j = 0;

        while ( j < List.at(i).size()) {
            size_t found;
            found = List.at(i).at(j).find(substr,0);

            if (found != std::string::npos) { //talvez n precise do std
                List.at(i).erase(List.at(i).begin() + j);
                hasfound = true;
            } else {
                j++;
            }
        }
    } //Fecha o for

} // Fecha a função
