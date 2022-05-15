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

int main()
{
    vector<string> ListaDeArquivos;

    cout << "Select an option: " << endl;

    for(;;)
    {
        cout << "--------------------------------------------------" << endl;
        cout << "UFxC String Store V.0" << endl;
        cout << "1. Insert string" << endl;
        cout << "2. Print index and string" << endl; // Statistics
        cout << "3. Search string (literal)" << endl;
        cout << "4. Search substrings" << endl;
        cout << "5. Remove (by string)" << endl;
        cout << "6. Remove by substrings (all occurrences)" << endl << endl;
        cout << "0. Quit" << endl;
        cout << "--------------------------------------------------" << endl;

        // Declaração de variáveis
        char ch; // Guardar o valor que o usuário digita no menu
        cin >> ch;
        

        if(ch == '1')
        {
            string Textos;
            cin >> Textos;
            LoadFile(Textos, ListaDeArquivos);
            continue;
        }

        if(ch == '2')
        {
            PrintList(ListaDeArquivos);
            continue;
        }
        if(ch == '3')
        {
            cout << "Enter with a word to search: ";
            string str;
            cin >> str;
            size_t pos=0;
            if(Search(str, ListaDeArquivos, pos) == true)
            {
                cout << "Word located at position " << pos << endl; // Precisamos localizar no arquivo
            }
            else
            {
                cout << "Word not located" << endl;
            }

            continue;
        }
        if(ch == '4')
        {
            cout << "Enter with a substring to search : ";
            string str;
            cin >> str;
            vector<size_t> indices;
            if(SearchSubstr(str, ListaDeArquivos, indices) == true)
            {
                cout << "Number of strings found : " << indices.size() << endl;
                for(size_t i=0; i<indices.size(); i++)
                {
                    cout << "Word - " << ListaDeArquivos.at(indices.at(i)) << endl;
                }
            }
            else
            {
                cout << "Substring not found." << endl;
            }

            continue;
        }
        if(ch == '5')
        {
            cout << "Enter with a word to remove: ";
            string str;
            cin >> str;
            if(!RemoveString(str, ListaDeArquivos))
                cout << endl << "Nothing to remove." << endl;
            continue;
        }
        if(ch == '0')
        {
            SaveFile("concatenation.txt", ListaDeArquivos);

            break;
        }

    }

    return 0;
}

void PrintList(const vector<string> &List)
{
    cout << "List of words has " << List.size() << " words" << endl;
    for(size_t i=0; i<List.size(); i++)
    {
        cout << "Index : " << i << " - Word: " << List.at(i) << " - Size: " << List.at(i).length() << endl;
    }
}

bool RemoveString(string str, vector<string> &List)
{
    //resolve o problema de ocorrencia de palavras repetidas
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
        cout << "Error, cannot open file" << endl;
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
        cout << "Error, cannot open file" << endl;
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
