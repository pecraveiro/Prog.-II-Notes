// Implementação
#include "person.hpp"

Person :: Person() //construtor
{
    cout << "Iniciando Person..." << endl;
}

Person :: Person(string name) : Person() //sobrecarga
{
    m_name = name;
    //this->name = name;
}

Person :: Person(string name, string address) : Person() //sobrecarga
{
    m_name = name;
    m_address = address;
}

Person :: Person(string name, string address, unsigned int age) : Person() //sobrecarga
{
    m_name = name;
    m_address = address;
    m_age = age;
}

Person :: Person(string name, string address, unsigned int age, float height, float weight) : Person() //sobrecarga
{
    m_name = name;
    m_address = address;
    m_age = age;
    m_height = height;
    m_weight = weight;
}

Person :: ~Person()
{
    cout << "Destructor Person..." << endl;
} //destructor

void Person :: ShowInfo()
{
  cout << "Name: " << m_name << endl;
  cout << "Address: " << m_address << endl;
  cout << "Age: " << m_age << endl;
  cout << "Height: " << m_height << endl;
  cout << "Weight: " << m_weight << endl;
  
}
