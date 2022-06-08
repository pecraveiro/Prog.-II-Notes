/* 
 -----------------------------------------------
  Trabalho - T2 - Unidade 02 - Introdução ao C++
  Aluno: Pedro Muhamad Suleiman Craveiro
  Matrícula: 20204443
  Universidade UFSC - Campus Araranguá
  Data: 07/06 - Entrega Final 08/06.
  Console online: https://onlinegdb.com/eAGITDHdl
 -----------------------------------------------
*/

// O programa é um um sistema para auxiliar na gestão de um comércio local.

#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

struct itemEntry 
{ // Cadastro de itens
    float unit_price;
    int copies; 
    int product_id;
    char name[30];
    char company[30];
};

class Store 
{ // Classe para a loja
 public:
    int numItem;
    itemEntry database[100];
    
    Store()
    {
        numItem = 0;
    }
    void insertItem(char itemName[], char company[], int pid, int c, float p);
    void deleteItem(char itemName[], int pid);
    itemEntry *searchi(char itemName[], int pid);
    void updateItem(char itemName[], int pid, int total, float price);
};

void Store::insertItem(char itemName[], char company[], int pid, int c, float p)
{
    strcpy(database[numItem].name,itemName);
    strcpy(database[numItem].company,company);
    database[numItem].product_id=pid;
    database[numItem].copies=c;
    database[numItem].unit_price=p;
    cout << "\nITEM INSERTED SUCCESSFULLY\n";
    numItem++;
}

void Store::deleteItem(char itemName[], int pid) // Função para deletar o item
{
   int i;
   for(i=0;i<numItem;i++)
       if((strcmp(itemName,database[i].name)==0) && (database[i].product_id==pid))
       {
           database[i].copies--;
           cout <<"\nITEM DELETED SUCCESSFULLY\n"; // Item deletado com sucesso
           return;
       }
    //else
    cout <<"\nITEM NOT FOUND\n";
}

itemEntry *Store::searchi(char itemName[], int pid) // Função para achar o item - Search Item
{
    int i;
    for(i=0;i<numItem;i++)
    {
        if((strcmp(itemName,database[i].name)==0) && (database[i].product_id==pid))
        return &database[i];
    }
    return NULL;
}

void Store::updateItem(char itemName[], int pid, int total, float price) // Função para atualizar o item
{
    itemEntry *item=searchi(itemName,pid);
    if(item==NULL)
    {
        cout<<"\n ITEM NOT FOUND \n";
        return;
    }
    item->copies+=total;
    item->unit_price=price;
}

int main()
{
    Store sto;
    char name[30], company [30];
    int product_id, copies, unit_price, option;
    
    // Do when
    do {
        // Menu elaborado
        cout << endl;
        cout << "------------------===--------------------" << endl;
        cout << "|    MY BUSINESS SYSTEM MANAGER MENU    |" << endl;
        cout << "|                                       |" << endl;
        cout << "| Press 1 - For insert an item...       |" << endl;
        cout << "| Press 2 - For delete an item...       |" << endl;
        cout << "| Press 3 - Search an item...           |" << endl;
        cout << "| Press 4 - Update an item...           |" << endl;
        cout << "|                                       |" << endl;
        cout << "| Press 5 - To exit the program         |" << endl;
        cout << "------------------===--------------------" << endl;
        cout << "Enter with an option: ";
    
    cin>>option;
    switch(option)
    {
        case 1 : cin.getline(name,80);
                 cout<<"\n Enter name of the item: "; //<<endl;
                 cin.getline(name,80);
                 cout<<"\n Marca do item: ";
                 cin.getline(company,80);
                 cout<<"\n Enter the product ID: ";
                 cin>>product_id;
                 cout<<"\n Enter the number of copies: ";
                 cin>>copies;
                 cout<<"\n Unit price per item: ";
                 cin>>unit_price;
                 sto.insertItem(name, company, product_id, copies, unit_price);
                break;
                
        case 2 : cin.getline(name,80);
                 cout<<"\n Enter name of the item: ";
                 cin.getline(name,80);
                 cout<<"\n Enter the product ID: ";
                 cin>>product_id;
                 sto.deleteItem(name, product_id);
                break;
                
        case 3 : cin.getline(name,80);
                 cout<<"\n Enter name of the item: ";
                 cin.getline(name,80);
                 cout<<"\n Enter the product ID: ";
                 cin>>product_id;
                 itemEntry *test;
                 test=sto.searchi(name,product_id);
                 if(test!=NULL)
                 {
                     cout<<"\n Searching Result " << endl;
                     cout<<"\n Item found. " << endl;
                     cout<<"\n Name of the item" << test->name<<"\n Company name: "<<test->company<<"\n Product ID "<<test->product_id<<"\n Number of copies available: "<<test->copies;
                 }
                 else
                 {
                     cout << "Item not found.";
                     break;
                 }
        case 4 : cout<<"\nEnter details for update: ";
                 cin.getline(name,80);
                 cout<<"\nEnter name: ";
                 cin.getline(name,80);
                 cout<<"\nEnter the product ID: ";
                 cin>>product_id;
                 cout<<"\nEnter total new entry: ";
                 cin>>copies;
                 cout<<"\nEnter new price: ";
                 cin>>unit_price;
                 sto.updateItem(name,product_id,copies,unit_price);
                break;
    } // Fecha a função switch
    } // Fecha o do 
    while(option!=5);
    return 0;
} // Fecha a função main
