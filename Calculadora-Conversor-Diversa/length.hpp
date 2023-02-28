#ifndef LENGTH_HPP
#define LENGTH_HPP

#include <iostream>
#include "entrada.hpp"

using namespace std;
  
  //Classe que realiza as conversões de comprimento
  class Length:public Input
    {
        public:
            void mm_m(); //milimetro -> metro
            void m_mm(); //metro -> milimetro
            void cm_m(); //centimetros -> metro
            void m_cm(); //metro -> centimetros
            void cm_km(); //centimetros -> quilômetros
            void km_cm(); //quilômetros -> centimetros
            void m_mile(); //metro -> milhas
            void mile_m(); //milhas -> metros
            void km_mile(); //quilômetro -> milhas
            void mile_km(); //milhas -> quilômetro 
            void feet_m(); //pés -> metros
            void m_feet(); //metros -> pés
            void inch_m(); //polegadas -> metros
            void m_inch(); //metros -> polegadas
            void yard_m(); // jardas -> metro
            void m_yard(); // metro -> jardas

    };
        
    void Length ::mm_m()
    {
        cout<<"\n   Milimetro= ";
        cin>>i;
        cout<<"\n   Metro= " << i*.001;
    }

    void Length ::m_mm()
    {
        cout<<"\n   metro= ";
        cin>>i;
        cout<<"\n   milimetro= "<<i*1000;
    }

    void Length ::cm_m()
    {
        cout<<"\n   Centimetro= ";
        cin>>i;
        cout<<"\n   Metro= "<<i*.01;
    }

    void Length ::m_cm()
    {
        cout<<"\n   metro= ";
        cin>>i;
        cout<<"\n   cm= "<<i*100;
    }

    void Length::m_mile()
    {
        cout<<"\n   metro= ";
        cin>>i;
        cout<<"\n   milha= "<<i*.00062;
    }

    void Length::mile_m()
    {
        cout<<"\n   milha= ";
        cin>>i;
        cout<<"\n   metro= "<<i*1609.344;
    }
    void Length::cm_km()
    {
        cout<<"\n   cm= ";
        cin>>i;
        cout<<"\n   km= "<<i*0.00001;

    }

    void Length::km_cm()
    {   
        cout<<"\n   km= ";
        cin>>i;
        cout<<"\n   cm= "<<i*100000;
    }

    void Length::feet_m()
    {
        cout<<"\n   pes= ";
        cin>>i;
        cout<<"\n   metro= "<<i*.3048;
    }

    void Length::m_feet()
    {
        cout<<"\n   metro= ";
        cin>>i;
        cout<<"\n   pes= "<<i*3.28084;
    }

    void Length::yard_m()
    {
        cout<<"\n   yard= ";
        cin>>i;
        cout<<"\n   metro= " <<i*0.9144;
    }

    void Length::m_yard()
    {
        cout<<"\n   metro= ";
        cin>>i;
        cout<<"\n   yard= "<<i*1.09361;
    }

    void Length::inch_m()
    {
        cout<<"\n   polegada=";
        cin>>i;
        cout<<"\n   metro="<<i*.0254;
    }

    void Length::m_inch()
    {
        cout<<"\n   metro=";
        cin>>i;
        cout<<"\n   polegada="<<i*39.37008;
    }

    void Length::km_mile()
    {
        cout<<"\n   quilômetro =";cin>>i;
        cout<<"\n   milha="<<i*.6213712 ;
    }

    void Length::mile_km( )
    {
        cout<<"\n   milha="; cin>>i;
        cout<<"\n   quilômetro ="<<i*1.60934;
    }
    

#endif