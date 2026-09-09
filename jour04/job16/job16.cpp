#include <iostream>

using namespace std;

int main(void)
{
    int tableau[5] = {12, 7, 25, 4, 18};

    int maximum = tableau[0];

    for (int i = 1; i < 5; i++)
    {
        if (tableau[i] > maximum)
        {
            maximum = tableau[i];
        }
    }

    cout << "La valeur maximale est : " << maximum << endl;

    return 0;
}