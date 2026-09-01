#include <iostream>

using namespace std;

int main(void)
{
    int nombre;

    cout << "Entrez un nombre : ";
    cin >> nombre;

    if (nombre % 2 == 0)
    {
        cout << "Le nombre est pair." << endl;
    }
    else
    {
        cout << "Le nombre est impair." << endl;
    }

    return 0;
}