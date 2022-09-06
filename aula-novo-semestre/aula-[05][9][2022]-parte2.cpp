//Input no C++

#include <iostream>

using namespace std;

int main()
{
    float value1, value2, sum; // declaração das variáveis e sua tipagem
    cout << "Please enter two integer values: " << endl; // pedir informação para o usuário
    cin >> value1 >> value2; // irá pegar o input do usuário 
    sum = value1 + value2; // declaração da variável soma
    cout << value1 << "+" << value2 << " = " << sum << endl;
    return 0;
}

// Caracteres especiais de formatação ''
// Cadeia de caracteres, será concatenado, precisa ser com ""
// Interessante observar: https://cplusplus.com/reference/iomanip/setprecision/
