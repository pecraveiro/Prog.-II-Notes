#ifndef IMC_HPP
#define IMC_HPP

#include <iostream>
#include "entrada.hpp"

using namespace std;
  
  //Classe que realiza O CÁLCULO DE IMC
  class Imc:public Input
  {
    public:
      float j; // recebe a altura
      void calculo();
  };

  void Imc::calculo()
  {
    cout<<"\nPeso (EM KG)= "; cin>>i;
    cout<<"\nAltura (Por ex: 1.80)= "; cin>>j;
    cout <<"\nO cálculo do seu IMC é: " << i / (j * j) << endl;
    
  }


#endif

// IMC = peso / (altura x altura).

/*

IMC	                |     CLASSIFICAÇÃO	    | OBESIDADE (GRAU)
MENOR QUE 18,5      |	MAGREZA	            |    0
ENTRE 18,5 E 24,9   |	NORMAL	            |    0
ENTRE 25,0 E 29,9   |	SOBREPESO           |  	I
ENTRE 30,0 E 39,9   |	OBESIDADE           |	II
MAIOR QUE 40,0      |	OBESIDADE GRAVE     |	III

*/