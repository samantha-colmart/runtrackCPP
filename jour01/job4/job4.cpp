#include <iostream>

using namespace std;

int main(void)
{
    int a;
    int b;
    int resultat;

    cout << "Entrez le premier nombre : ";
    cin >> a;

    cout << "Entrez le deuxieme nombre : ";
    cin >> b;

    resultat = a + b;

    cout << "Resultat : " << resultat << endl;

    return 0;
}