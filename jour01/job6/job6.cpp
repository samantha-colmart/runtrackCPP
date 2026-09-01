#include <iostream>

using namespace std;

int main(void)
{
    int nombre;

    cout << "Entrez un nombre : ";
    cin >> nombre;

    for (int i = 1; i <= 10; i++)
    {
        cout << nombre << " x " << i << " = " << nombre * i << endl;
    }

    return 0;
}