#include <iostream>

using namespace std;

int main(void)
{
    int tableau1[5] = {1, 3, 5, 7, 9};
    int tableau2[5] = {2, 4, 6, 8, 10};
    int tableau3[10];

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < 5 && j < 5)
    {
        if (tableau1[i] < tableau2[j])
        {
            tableau3[k] = tableau1[i];
            i++;
        }
        else
        {
            tableau3[k] = tableau2[j];
            j++;
        }

        k++;
    }

    while (i < 5)
    {
        tableau3[k] = tableau1[i];
        i++;
        k++;
    }

    while (j < 5)
    {
        tableau3[k] = tableau2[j];
        j++;
        k++;
    }

    cout << "Tableau fusionne : ";

    for (int i = 0; i < 10; i++)
    {
        cout << tableau3[i] << " ";
    }

    cout << endl;

    return 0;
}