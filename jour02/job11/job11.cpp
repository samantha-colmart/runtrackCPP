#include <iostream>

using namespace std;

int main(void)
{
    int n;
    unsigned long long factorielle = 1;

    cout << "Entrez un nombre entier : ";
    cin >> n;

    if (n < 0)
    {
        cout << "La factorielle n'existe pas pour un nombre negatif." << endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            factorielle = factorielle * i;
        }

        cout << "La factorielle de " << n << " est : " << factorielle << endl;
    }

    return 0;
}