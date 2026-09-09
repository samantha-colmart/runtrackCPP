#include <iostream>

using namespace std;

int main(void)
{
    int a = 10;
    int b = 20;
    int c = 30;

    int *pointeurA = &a;
    int *pointeurB = &b;
    int *pointeurC = &c;

    cout << "Valeurs avant modification :" << endl;
    cout << "a = " << *pointeurA << endl;
    cout << "b = " << *pointeurB << endl;
    cout << "c = " << *pointeurC << endl;

    *pointeurA = 100;
    *pointeurB = 200;
    *pointeurC = 300;

    cout << "Valeurs apres modification :" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}