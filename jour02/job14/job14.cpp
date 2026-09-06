#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int nombre;
    int copie;
    int chiffres = 0;
    int somme = 0;

    cout << "Entrez un nombre : ";
    cin >> nombre;

    copie = nombre;

    do
    {
        chiffres++;
        copie = copie / 10;
    }
    while (copie != 0);

    copie = nombre;

    while (copie != 0)
    {
        int chiffre = copie % 10;
        somme = somme + pow(chiffre, chiffres);
        copie = copie / 10;
    }

    if (somme == nombre)
    {
        cout << nombre << " est un nombre narcissique." << endl;
    }
    else
    {
        cout << nombre << " n'est pas un nombre narcissique." << endl;
    }

    return 0;
}