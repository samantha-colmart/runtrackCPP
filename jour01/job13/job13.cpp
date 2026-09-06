#include <iostream>

using namespace std;

int main(void)
{
    int N;
    int somme = 0;

    cout << "Entrez N : ";
    cin >> N;

    for (int i = 5; i <= N; i++)
    {
        somme = somme + (i * i * i);
    }

    cout << "La somme des cubes est : " << somme << endl;

    return 0;
}