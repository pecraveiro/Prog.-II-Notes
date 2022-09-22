#include <iostream>
#include <vector>


using namespace std;

//metodos
void InsertWord(vector<string> &localList);
void PrintWords(const vector<string> &localList);
bool SearchWord(const vector<string> &localList);
bool RemoveWordByIndex(vector<string> &localList);

int main()
{
    vector<string> ListOfWords;

    while(true) //main loop
    {
        cout << endl;
        cout << "--------------------------------------------------" << endl;
        cout << "UFxC String Store V.0" << endl;
        cout << "1. Insert string" << endl;
        cout << "2. Print index and string" << endl;
        cout << "3. Search string (literal position)" << endl;
        cout << "4. Search substrings" << endl;
        cout << "5. Remove (by index)" << endl;
        cout << "6. Remove by substrings (all occurrences)" << endl;
        cout << "0. Quit" << endl;
        cout << "--------------------------------------------------" << endl;
        cout << "Select an option: ";

        char ch;
        cin >> ch;

        //conditions or switch case
        if(ch == '1')
        {
            InsertWord(ListOfWords);
            continue;
        }
        if(ch == '2')
        {
            PrintWords(ListOfWords);
            continue;
        }

        if(ch == '3')
        {
            SearchWord(ListOfWords);
            continue;
        }
        if(ch == '4')
        {
            continue;
        }
        if(ch == '5')
        {
            RemoveWordByIndex(ListOfWords);
            continue;
        }
        
        if(ch == '6')
        {
        
            continue;
        }
        
        if(ch == '0')
        {
            break;
        }

    }

    return 0;
}

// Criação de funções
// Primeiro objetivo do menu
void InsertWord(vector<string> &localList)
{
    cout << "Insert a word: ";
            string str;
            cin>>str;
            localList.push_back(str);
}
// Segundo objetivo do menu
void PrintWords(const vector<string> &localList)
{
    cout << "Print list of words: " << endl;
    cout << "List of words has " << localList.size() << " word(s)."<< endl;
    
    for(size_t i=0; i<localList.size(); i++)
    {
        cout << "Index: " << i << " -> " << localList.at(i) << endl;
    }
}
// Forma de passagem segura & ou const com cópia
// Função para o procedimento 3 do menu
bool SearchWord(const vector<string> &localList)
{
    cout << "Enter a word to search: " << endl;
    string query; //query = consulta em inglês
    cin >> query;
    
    for(size_t i=0; i<localList.size(); i++)
    {
        if(localList.at(i) == query)
        cout << "The word "<< query << " has found at position: " << i << endl;
        return true;
    }
    return false;
}

bool RemoveWordByIndex(vector<string> &localList)
{
    cout << "Enter with an index to remove: " << endl;
    int index;
    cin >> index;
    
    if(index >= 0 && index < localList.size())
    {
        localList.erase(localList.begin()+index);
        return true;
    }
    else
    {
        cout << "Idiot! Invalid index..." << endl;
        return false;
    }
}
