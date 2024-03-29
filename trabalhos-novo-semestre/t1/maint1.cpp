/* 
  -----------------------------------------------
  Trabalho - T1 - Unidade 01 - Introdução ao C++
  Aluno: Pedro Muhamad Suleiman Craveiro
  Matrícula: 20204443
  UFSC - Campus Araranguá
  Entrega Final - 02/10/2022
  Console online: https://onlinegdb.com/D_i7VeJGT
  Youtube: https://youtu.be/-sLDqEFzW1c
  -----------------------------------------------
*/

// O programa é um gerenciador de arquivos em disco que contém opções citadas nas alternativas do menu.

// Bibliotecas - Diretivas
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

// Funções - Métodos
bool load_data (vector < pair < string, vector <string> > >& list_of_files);
void search_subs (vector < pair < string, vector <string> > > list_of_files);
bool remove_subs (vector < pair < string, vector <string> > >& list_of_files);
bool remove_rep (vector < pair < string, vector <string> > >& list_of_files);
void save_data (vector < pair < string, vector <string> > > list_of_files);
void show_statistics (vector < pair < string, vector <string> > > list_of_files);

// Main
int main() {
    vector < pair < string, vector <string>>> list_of_files;
    
    while(true) {
        char option;
        
        // Menu elaborado
        cout << endl;
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
        cout << "Enter with a option: ";
        cin >> option; //input

        if(option == '1') {
            bool has_opened;
            has_opened = load_data(list_of_files);

            if (!has_opened){
                break;
            }
        }

        if(option == '2') {
            search_subs (list_of_files);
        }

        if(option == '3') {
            bool has_removed;
            has_removed = remove_subs (list_of_files);

            if (has_removed) {
                cout << "Words removed!" << endl;
            }
            else {
                cout << "There are no words with that substring." << endl;
            }
        }

        if(option == '4') {
            remove_rep (list_of_files);
        }

        if(option == '5') {
            show_statistics (list_of_files);
        }

        if(option == '6') {
            save_data (list_of_files);

            break;
        }
    }
    return 0;
} // Fecha a função main

bool load_data (vector < pair < string, vector <string>>>& list_of_files) {
    bool has_opened = true;
    ifstream dictionary;
    string name_file, word;
    vector<string> list_of_words;
    pair <string, vector <string>> list;

    cout << "Enter a file to open: ";
    cin >> name_file;

    dictionary.open(name_file);

    if (!dictionary.is_open()) {
        has_opened = false;
    }

    while (getline(dictionary, word)) {
        list_of_words.push_back(word);
    }

    list.first = name_file;
    list.second = list_of_words;
    list_of_files.push_back(list);

    dictionary.close();
    return has_opened;
} // Fecha a função load_data

void search_subs (vector < pair < string, vector <string>>> list_of_files) {

    string substring;

    cout << "Enter a substring to search: ";
    cin >> substring;

    for (size_t i = 0; i < list_of_files.size(); i++) {
        for (size_t j = 0; j < list_of_files.at(i).second.size(); j++) {
            if (list_of_files.at(i).second.at(j).find(substring) <= list_of_files.at(i).second.at(j).length()) {
                cout << list_of_files.at(i).first << " has word: "
                << list_of_files.at(i).second.at(j) << endl;
            }
        }
    }
} // Fecha a função search substrings

bool remove_subs (vector < pair < string, vector <string>>>& list_of_files) {
    string substring;
    bool has_removed = false;

    cout << "Enter a substring to remove all occurrences: ";
    cin >> substring;

    for (size_t i = 0; i < list_of_files.size(); i++) {
        for (size_t j = 0; j < list_of_files.at(i).second.size(); j++) {
            if (list_of_files.at(i).second.at(j).find(substring) <= list_of_files.at(i).second.at(j).length()) {
                list_of_files.at(i).second.erase(list_of_files.at(i).second.begin() + j);
                has_removed = true;
                --j;
            }
        }
    }
    return has_removed;
} // Fecha a função remove substrings

bool remove_rep (vector < pair < string, vector <string>>>& list_of_files) { // Remove strings repetidas
    string string;
    bool has_removed = false;

    cout << "Enter a string to remove all occurrences: ";
    cin >> string;

    for (size_t i = 0; i < list_of_files.size(); i++) {
        for (size_t j = 0; j < list_of_files.at(i).second.size(); j++) {
            if (list_of_files.at(i).second.at(j).find(string) <= list_of_files.at(i).second.at(j).length()) {
                list_of_files.at(i).second.erase(list_of_files.at(i).second.begin() + j);
                has_removed = true;
                --j;
            }
        }
    }
    return has_removed;
} // Fecha a função remove repeated words

void save_data (vector < pair < string, vector <string>>> list_of_files) { // Salvar o arquivo após o close
    ofstream final_list;
    final_list.open("concatenation.txt");

    if (final_list.good()) {
        for (size_t i = 0; i < list_of_files.size(); i++) {
            for (size_t j = 0; j < list_of_files.at(i).second.size(); j++) {
                final_list << list_of_files.at(i).second.at(j) << "\n";
            }
        }
    }

    final_list.close();
} // Fecha a função save data

void show_statistics (vector < pair < string, vector <string>>> list_of_files) { // Estatisticas
    
    for (size_t i = 0; i < list_of_files.size(); i++) {
        cout << list_of_files.at(i).first << " has " << list_of_files.at(i).second.size() << " words" << endl;
    }
} // Fecha a função show statistics
