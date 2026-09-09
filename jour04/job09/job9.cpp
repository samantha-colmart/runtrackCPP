#include <iostream>

using namespace std;

int main(void)
{
    int taille;

    cout << "Combien d'entiers voulez-vous entrer ? : ";
    cin >> taille;

    int* tableau = new int[taille];

    for (int i = 0; i < taille; i++)
    {
        cout << "Entrez l'entier " << i + 1 << " : ";
        cin >> tableau[i];
    }

    cout << "Contenu du tableau : ";

    for (int i = 0; i < taille; i++)
    {
        cout << tableau[i] << " ";
    }

    cout << endl;

    delete[] tableau;

    return 0;
}