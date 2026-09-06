#include <iostream>

using namespace std;

int main(void)
{
    int tableau[10];
    int somme = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Entrez l'entier " << i + 1 << " : ";
        cin >> tableau[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (tableau[i] % 2 == 0)
        {
            somme = somme + tableau[i];
        }
    }

    cout << "La somme des elements pairs est : " << somme << endl;

    return 0;
}