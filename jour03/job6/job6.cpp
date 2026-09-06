#include <iostream>

using namespace std;

int main(void)
{
    int T[10];
    int compteur = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Entrez l'entier " << i + 1 << " : ";
        cin >> T[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (T[i] >= 5)
        {
            compteur++;
        }
    }

    cout << "Nombre d'entiers superieurs ou egaux a 5 : " << compteur << endl;

    return 0;
}