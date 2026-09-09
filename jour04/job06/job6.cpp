#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int m_integer = 17;
    float m_float = 3.14;
    double m_double = 123.345;
    string m_character = "La Plateforme";

    cout << "m_integer :" << endl;
    cout << "Valeur : " << m_integer << endl;
    cout << "Adresse : " << &m_integer << endl;

    cout << endl;

    cout << "m_float :" << endl;
    cout << "Valeur : " << m_float << endl;
    cout << "Adresse : " << &m_float << endl;

    cout << endl;

    cout << "m_double :" << endl;
    cout << "Valeur : " << m_double << endl;
    cout << "Adresse : " << &m_double << endl;

    cout << endl;

    cout << "m_character :" << endl;
    cout << "Valeur : " << m_character << endl;
    cout << "Adresse : " << &m_character << endl;

    return 0;
}