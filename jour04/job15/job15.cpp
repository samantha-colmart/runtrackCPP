#include <iostream>

using namespace std;

int main(void)
{
    int tableau[5] = {1, 2, 3, 4, 5};

    for (int& valeur : tableau)
    {
        cout << valeur << endl;
    }

    return 0;
}