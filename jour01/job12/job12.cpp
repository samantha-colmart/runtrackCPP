#include <iostream>

using namespace std;

int main(void)
{
    int nombre;
    int somme = 0;

    cout << "Entrez un nombre : ";
    cin >> nombre;
    somme = somme + nombre;

    cout << "Entrez un nombre : ";
    cin >> nombre;
    somme = somme + nombre;

    cout << "Entrez un nombre : ";
    cin >> nombre;
    somme = somme + nombre;

    cout << "Entrez un nombre : ";
    cin >> nombre;
    somme = somme + nombre;

    cout << "Entrez un nombre : ";
    cin >> nombre;
    somme = somme + nombre;

    cout << "La moyenne est : " << somme / 5.0 << endl;

    return 0;
}