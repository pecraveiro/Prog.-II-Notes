#ifndef MOEDAS_HPP
#define MOEDAS_HPP

#include <iostream>
#include "entrada.hpp"

using namespace std;
  
  //Classe que realiza as conversões de moedas
  class Moedas:public Input
  {
    public:
      void reais_dolar();
      void dolar_reais();
      void dolar_euro();
      void euro_dolar();
      void reais_euro();
      void euro_reais();
  };

  void Moedas::reais_dolar()
  {
    cout<<"\n   Reais = "; cin >> i;
    cout<<"\n   Dolares = " << i/5.31;
  }

  void Moedas::dolar_reais()
  {
    cout<<"\n   Dolares = "; cin >> i;
    cout<<"\n   Reias = "<< i*5.31;
  }
  
    void Moedas::dolar_euro()
  {
    cout<<"\n   Dolar = "; cin >> i;
    cout<<"\n   Euro = "<< i*0.94;
  }
  
    void Moedas::euro_dolar()
  {
    cout<<"\n   Euro = "; cin >> i;
    cout<<"\n   Dolar = "<< i*1.06;
  }
  
    void Moedas::reais_euro()
  {
    cout<<"\n   Reais = "; cin >> i;
    cout<<"\n   Euro = "<< i*0.18;
  }
  
      void Moedas::euro_reais()
  {
    cout<<"\n   Euro = "; cin >> i;
    cout<<"\n   Reais = "<< i*5.64;
  }


#endif

// Cotações feitas no dia 19-18/12/2022