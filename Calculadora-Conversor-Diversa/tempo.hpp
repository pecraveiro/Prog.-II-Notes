#ifndef TEMPO_HPP
#define TEMPO_HPP

#include <iostream>
#include "entrada.hpp"

using namespace std;
  
  //Classe que realiza as conversões de TEMPO
  class Tempo:public Input
  {
    public:
      void segundos_min(); //segundos -> para minutos
      void segundos_horas(); //segundos -> para horas
      void minutos_segundos(); //minutos -> para segundos
      void minutos_horas(); //minutos -> para horas
      void dias_segundos(); // dias -> para segundos
      void dias_minutos(); // dias -> para minutos
      void dias_horas(); // dias -> para horas
      void anos_horas(); // anos -> para horas
      void anos_segundos(); // anos -> para segundos
  };

  void Tempo::segundos_min()
  {
    cout<<"\n   Segundos = "; cin >> i;
    cout<<"\n   Minutos = " << i/60;
  }

 void Tempo::segundos_horas()
  {
    cout<<"\n   Segundos = "; cin >> i;
    cout<<"\n   Horas = " << i/3600; // 1min tem 60s, logo 60min = 1h, com isso 60*60 = 3.600
  }
  
  void Tempo::minutos_segundos()
  {
    cout<<"\n   Minutos = "; cin >> i;
    cout<<"\n   Segundos = " << i*60; // 1min tem 60s
  }
  
  void Tempo::minutos_horas()
  {
    cout<<"\n   Minutos = "; cin >> i;
    cout<<"\n   Horas = " << i/60; // 1h tem 60min
  }
  
    void Tempo::dias_segundos()
  {
    cout<<"\n   Dias = "; cin >> i;
    cout<<"\n   Segundos = " << i*24*60*60; // 1 dia tem 24h, 1h tem 60min e 1min tem 60s
  }
  
    void Tempo::dias_minutos()
  {
    cout<<"\n   Dias = "; cin >> i;
    cout<<"\n   Minutos = " << i*24*60; // 1 dia tem 24h, 1h tem 60min
  }
  
      void Tempo::dias_horas()
  {
    cout<<"\n   Dias = "; cin >> i;
    cout<<"\n   Horas = " << i*24; // 1 dia tem 24h
  }
  
    void Tempo::anos_horas()
  {
    cout<<"\n   Ano(s) = "; cin >> i;
    cout<<"\n   Horas = " << i*365*24; // 1 ano tem 365 dias, 1 dia tem 24h
  }
  
    void Tempo::anos_segundos()
  {
    cout<<"\n   Ano(s) = "; cin >> i;
    cout<<"\n   Minutos = " << i*365*24*60; // 1 ano tem 365 dias, 1 dia tem 24h, 1h tem 60min
  }

#endif
