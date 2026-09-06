#include <iostream>

using namespace std;

int main(void)
{
    int a;
    int b;
    int nombre;

    cout << "Entrez a : ";
    cin >> a;

    cout << "Entrez b : ";
    cin >> b;

    cout << "Entrez un nombre : ";
    cin >> nombre;

    if (nombre >= a && nombre <= b)
    {
        cout << "GAGNE" << endl;
    }
    else
    {
        cout << "PERDU" << endl;
    }

    return 0;
}