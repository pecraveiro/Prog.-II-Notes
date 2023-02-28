//Sideproject - @pecraveiro

// Adiciona as headers -> classe mãe e classe filha
#include "entrada.hpp" // entradas
#include "length.hpp" // classe filha - conversão de medidas de comprimento
#include "weight.hpp" // classe filha - conversão de medidas de peso/massa
#include "imc.hpp" // classe filha - cálculo de imc
#include "moedas.hpp" // classe filha - cálculo de conversão de moedas
#include "tempo.hpp" // classe filha - cálculo de tempo
#include "raio.hpp" //classe filha - cálculo aproximado da distância do raio

int main()
{
    Length b;
    Weight c;
    Imc d;
    Moedas e;
    Tempo f;
    Raio g;

    //Variáveis para seleção das opções
    int x, y;

    while(1)
    {
    // Menu elaborado
    cout << endl;
    cout << "--------------------------------=======----------------------------------" << endl;
    cout << "| SEJA BEM-VINDO AO CONVERSOR DE UNIDADES DE LINGUAGEM DE PROGRAMAÇÃO 2  |" << endl;
    cout << "|                                                                        |" << endl;
    cout << "| SELECIONE O TIPO DE CONVERSOR:                                         |" << endl;
    cout << "| 1 - CONVERSOR DE COMPRIMENTO                                           |" << endl;
    cout << "| 2 - CONVERSOR DE PESO                                                  |" << endl;
    cout << "| 3 - CÁLCULO DE IMC                                                     |" << endl;
    cout << "| 4 - CONVERSOR DE MOEDAS                                                |" << endl;
    cout << "| 5 - CONVERSOR DE TEMPO                                                 |" << endl;
    cout << "| 6 - CÁLCULO DA DISTÂNCIA DE UM RAIO                                    |" << endl;
    cout << "|                                                                        |" << endl;
    cout << "| 7 - SAIR DO PROGRAMA                                                   |" << endl;  
    cout << "--------------------------------=======----------------------------------" << endl;
    cout << endl;
    cout << "DIGITE SUA OPÇÃO (APENAS NÚMEROS): ";
    cin >> x;
    
    //Sub menu de conversor de comprimento
      if(x==1)
        {           
          cout<<"ESCOLHA A UNIDADE DE CONVERSÃO:\n";

          cout<<"\n  1 - milimetro -> metro";
          cout<<"\n  2 - metro -> milimetro";
          cout<<"\n  3 - centimetros -> metro";
          cout<<"\n  4 - metro -> centimetros";
          cout<<"\n  5 - centimetros -> quilômetros";
          cout<<"\n  6 - quilômetros -> centimetros";
          cout<<"\n  7 - metro -> milhas";
          cout<<"\n  8 - milhas -> metros";
          cout<<"\n  9 - quilômetro -> milhas";
          cout<<"\n 10 - milhas -> quilômetro";
          cout<<"\n 11 - pés -> metros";
          cout<<"\n 12 - metros -> pés";
          cout<<"\n 13 - polegadas -> metros";
          cout<<"\n 14 - metros -> polegadas";
          cout<<"\n 15 - jardas/yards -> metro";
          cout<<"\n 16 - metro -> jardas/yards";
          cout<<"\n 17 - Voltar ao menu principal";


          while(1)
            {
              cout<<"\n\nDigite sua escolha = ";
              cin>>y;

              if (y==1)
                { b.mm_m(); }
                else if(y==2)
                    { b.m_mm(); }
                else if (y==3)
                    { b.cm_m(); }
                else if (y==4)
                    { b.m_cm(); }
                else if (y==5)
                    { b.cm_km(); }
                else if (y==6)
                    {  b.km_cm(); }
                else if (y==7)
                    {  b.m_mile(); }
                else if (y==8)
                    {   b.mile_m(); }
                else if (y==9)
                    {   b.km_mile(); }
                else if (y==10)
                    {  b.mile_km(); }
                else if (y==11)
                    {  b.feet_m(); }
                else if (y==12)
                    { b.m_feet(); }
                 else if (y==13)
                    { b.inch_m();}
                else if(y==14)
                    { b.m_inch();}
                else if (y==15)
                    {b.yard_m();}
                else if (y==16)
                    {b.m_yard();}
                else if (y==17)
                    {break;}
            }
           }

            //Sub menu de conversor de peso 
            else if(x==2)
            {                  
              cout<<"\nESCOLHA A UNIDADE DE CONVERSÃO: \n";
              cout<<"\n  1 - Miligrama -> Grama";
              cout<<"\n  2 - Grama -> Miligrama";
              cout<<"\n  3 - Grama -> Kilograma";
              cout<<"\n  4 - KiloGrama -> Grama";
              cout<<"\n  5 - Libra -> Kilograma";
              cout<<"\n  6 - Kilograma -> Libra";
              cout<<"\n  7 - Grama -> Libra";
              cout<<"\n  8 - Libra -> Grama";
              cout<<"\n  9 - Kilograma -> Tonelada";
              cout<<"\n 10 - Tonelada -> Kilograma";
              cout<<"\n 11 - Voltar ao menu";

              while(1)
              {
                cout<<"\n\nDigite sua escolha = ";
                cin>>y;

                if (y==1)
                {c.milligm_gm();}
                  else if (y==2)
                    {c.gm_milligm();}
                  else if (y==3)
                    {c.gm_kg();}
                  else if (y==4)
                    {c.kg_gm();}
                  else if (y==5)
                    {c.pound_kg();}
                  else if (y==6)
                    {c.kg_pound();}
                  else if (y==7)
                    {c.gm_pound();}
                  else if (y==8)
                    {c.pound_gm();}
                  else if (y==9)
                    {c.kg_mton();}
                  else if (y==10)
                    {c.mton_kg();}
                  else if (y==11)
                  {break;}
              }
        }
        
        //Sub menu de CÁLCULO DE IMC 
            else if(x==3)
            {                  
              cout<<"\nDigite 1 para calcular seu IMC";
              cout<<"\nDigite 2 para VOLTAR AO MENU\n";

              while(1)
              {
                cout<<"\nDigite sua escolha: ";
                cin>>y; 
                if (y==1)
                {d.calculo();}
                  else if (y==2)
                  {break;}
              }
        }
        
        //Sub menu de CONVERSAO DE MOEDAS
            else if(x==4)
            {                  
              cout<<"\nESCOLHA A MOEDA QUE DESEJA CONVERTER: \n";
              cout<<"\n  1 - REAIS -> DOLAR";
              cout<<"\n  2 - DOLAR -> REAIS";
              cout<<"\n  3 - DOLAR -> EURO";
              cout<<"\n  4 - EURO -> DOLAR";
              cout<<"\n  5 - REAIS -> EURO";
              cout<<"\n  6 - EURO -> REIAS";
              cout<<"\n 7 - Voltar ao menu";

              while(1)
              {
                cout<<"\n\nDigite sua escolha = ";
                cin>>y;

                if (y==1)
                {e.reais_dolar();}
                  else if (y==2)
                    {e.dolar_reais();}
                  else if (y==3)
                    {e.dolar_euro();}
                  else if (y==4)
                    {e.euro_dolar();}
                  else if (y==5)
                    {e.reais_euro();}
                  else if (y==6)
                    {e.euro_reais();}
                  
                  else if (y==7)
                  {break;}
              }
        }
        
        //Sub menu de CONVERSAO DE TEMPO
            else if(x==5)
            {                  
              cout<<"\nESCOLHA A UNIDADE QUE DESEJA CONVERTER: \n";
              cout<<"\n  1 - SEGUNDOS -> MINUTOS";
              cout<<"\n  2 - SEGUNDOS -> HORAS";
              cout<<"\n  3 - MINUTOS -> SEGUNDOS";
              cout<<"\n  4 - MINUTOS -> HORAS";
              cout<<"\n  5 - DIAS -> SEGUNDOS";
              cout<<"\n  6 - DIAS -> MINUTOS";
              cout<<"\n  7 - DIAS -> HORAS";
              cout<<"\n  8 - ANOS -> HORAS";
              cout<<"\n  9 - ANOS -> SEGUNDOS";
              cout<<"\n 10 - Voltar ao menu";

              while(1)
              {
                cout<<"\n\nDigite sua escolha = ";
                cin>>y;

                if (y==1)
                {f.segundos_min();}
                  else if (y==2)
                    {f.segundos_horas();}
                  else if (y==3)
                    {f.minutos_segundos();}
                  else if (y==4)
                    {f.minutos_horas();}
                  else if (y==5)
                    {f.dias_segundos();}
                  else if (y==6)
                    {f.dias_minutos();}
                  else if (y==7)
                    {f.dias_horas();}
                  else if (y==8)
                    {f.anos_horas();}
                  else if (y==9)
                    {f.anos_segundos();}
                  
                  else if (y==10)
                  {break;}
              }
        }
        
        else if(x==6)
            {                  
              cout<<"\n1 - Iniciar o cálculo";
              
              cout<<"\n10 - Voltar ao menu\n";

              while(1)
              {
                cout<<"\nDigite sua escolha: ";
                cin>>y;


                if (y==1)
                
                {g.calc_raio();}
                
                  else if (y==10)
                  {break;}
              }
        }
        
        //Finaliza o programa
        else if(x==7){ break;}
    }

} // fecha a função main