#include <iostream>
#include <string>

using namespace std;

struct Tableau
{
    int nombre;
    string texte1;
    float decimal;
    string texte2;
};

int main(void)
{
    Tableau tab = {2019, "La Plateforme", 3.14, "Etudiants"};

    cout << "Valeur : " << tab.nombre << endl;
    cout << "Adresse : " << &tab.nombre << endl;

    cout << "Valeur : " << tab.texte1 << endl;
    cout << "Adresse : " << &tab.texte1 << endl;

    cout << "Valeur : " << tab.decimal << endl;
    cout << "Adresse : " << &tab.decimal << endl;

    cout << "Valeur : " << tab.texte2 << endl;
    cout << "Adresse : " << &tab.texte2 << endl;

    return 0;
}