#include <iostream>

using namespace std;

int main(void)
{
    int annee;

    cout << "Entrez une annee : ";
    cin >> annee;

    if ((annee % 400 == 0) || (annee % 4 == 0 && annee % 100 != 0))
    {
        cout << "L'annee est bissextile." << endl;
    }
    else
    {
        cout << "L'annee n'est pas bissextile." << endl;
    }

    return 0;
}