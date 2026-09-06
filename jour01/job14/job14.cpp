#include <iostream>

using namespace std;

int main(void)
{
    int nombre;
    int inverse = 0;

    cout << "Entrez un nombre : ";
    cin >> nombre;

    while (nombre != 0)
    {
        inverse = inverse * 10 + nombre % 10;
        nombre = nombre / 10;
    }

    cout << "Le nombre inverse est : " << inverse << endl;

    return 0;
}