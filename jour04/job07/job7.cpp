#include <iostream>

using namespace std;

int main(void)
{
    int tableau[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        cout << "Element " << i << " :" << endl;
        cout << "Valeur : " << tableau[i] << endl;
        cout << "Adresse : " << &tableau[i] << endl;
        cout << endl;
    }

    return 0;
}