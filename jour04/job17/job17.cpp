#include <iostream>
#include <string>
#include <memory>

using namespace std;

int main(void)
{
    string fruit[5] = {"Pomme", "Banane", "Fraise", "Mangue", "Kiwi"};

    cout << "Liste des fruits :" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << fruit[i] << endl;
    }

    int nombre;

    cout << endl;
    cout << "Combien de fruits favoris voulez-vous entrer ? : ";
    cin >> nombre;

    unique_ptr<string[]> favorites = make_unique<string[]>(nombre);

    for (int i = 0; i < nombre; i++)
    {
        cout << "Entrez votre fruit favori " << i + 1 << " : ";
        cin >> favorites[i];
    }

    cout << endl;
    cout << "Vos fruits favoris :" << endl;

    for (int i = 0; i < nombre; i++)
    {
        cout << favorites[i] << endl;
    }

    // La memoire geree par unique_ptr est liberee automatiquement
    // lorsque favorites disparait, a la fin de sa portee.

    return 0;
}