#include <iostream>

using namespace std;

int main(void)
{
    int a;
    int b;
    int temporaire;

    cout << "Entrez a : ";
    cin >> a;

    cout << "Entrez b : ";
    cin >> b;

    int *pointeurA = &a;
    int *pointeurB = &b;

    temporaire = *pointeurA;
    *pointeurA = *pointeurB;
    *pointeurB = temporaire;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}