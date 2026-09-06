#include <iostream>

using namespace std;

int main(void)
{
    int T[10];
    int indiceMax = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Entrez l'entier " << i + 1 << " : ";
        cin >> T[i];
    }

    for (int i = 1; i < 10; i++)
    {
        if (T[i] > T[indiceMax])
        {
            indiceMax = i;
        }
    }

    cout << "L'indice du plus grand element est : " << indiceMax << endl;

    return 0;
}