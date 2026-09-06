#include <iostream>

using namespace std;

int main(void)
{
    int a;
    int b;
    int c;

    cout << "Entrez le premier nombre : ";
    cin >> a;

    cout << "Entrez le deuxieme nombre : ";
    cin >> b;

    cout << "Entrez le troisieme nombre : ";
    cin >> c;

    if (a >= b && a >= c)
    {
        cout << "Le plus grand nombre est : " << a << endl;
    }
    else if (b >= a && b >= c)
    {
        cout << "Le plus grand nombre est : " << b << endl;
    }
    else
    {
        cout << "Le plus grand nombre est : " << c << endl;
    }

    return 0;
}