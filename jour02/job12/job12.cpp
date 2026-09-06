#include <iostream>

using namespace std;

int main(void)
{
    int n;
    double somme = 0;

    cout << "Entrez n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        somme = somme + 1.0 / i;
    }

    cout << "La somme est : " << somme << endl;

    return 0;
}