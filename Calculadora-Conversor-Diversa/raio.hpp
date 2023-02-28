/*

1 - Como saber se o raio caiu perto?

A luz produzida pelo raio chega quase instantaneamente à visão de quem o observa. 
Já o som (trovão) demora um bom tempo, pois a sua velocidade é menor. Para obter a distância aproximada da queda do raio, 
em quilômetros, basta contar o tempo (em segundos) entre o momento em que se vê o raio e se escuta o trovão e dividir por três.

*/

#ifndef RAIO_HPP
#define RAIO_HPP

#include <iostream>
#include "entrada.hpp"

using namespace std;
  
  //Classe que realiza o cálculo aproximado de onde o raio caiu em KM
  class Raio:public Input
  {
    public:
      void calc_raio(); // função que realiza o cálculo
  };

  void Raio::calc_raio()
  {
    cout<<"\n   Para obter a distância aproximada da queda do raio, em quilômetros, basta contar o tempo (em segundos) entre o momento em que se vê o raio e se escuta o trovão e dividir por três. \n"; 
    cout<<"\n   Segundos = "; cin >> i;
    cout<<"\n   Kilometros (aproximadamente) = " << i/3 << endl;
  }

#endif
