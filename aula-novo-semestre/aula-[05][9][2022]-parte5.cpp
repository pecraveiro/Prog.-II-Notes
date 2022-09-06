// Vector - Vetores
#include <iostream>
#include <vector> // incluir a diretiva, a biblioteca

int main()
{
    
    //formas de construção de um vetor
    vector<int> vec_a;
    vector<int> vec_b(10); // 1 argumento
    vector<int> vec_c(10, 8); //2 argumentos - SOBRECARGA DE FUNÇÃO - RESPEITANDO OS PARÂMETROS
    vector<int> vec_d {10, 20, 30, 40};

    return 0;
}

// Vector é uma forma de serializar os dados no C++, um array
// Procura sempre endereços disponiveis
// vector<ESPECIFICAR SEU TIPO> uma vez que eu defino seu tipo nao posso colocar outro tipo
