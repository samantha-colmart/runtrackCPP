#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void)
{
    srand(time(0));

    int nombreMystere = rand() % 101;
    int proposition;
    int chances = 7;

    cout << "Nombre mystere entre 0 et 100." << endl;
    cout << "Vous avez " << chances << " chances." << endl;

    while (chances > 0)
    {
        cout << "Entrez un nombre : ";
        cin >> proposition;

        if (proposition == nombreMystere)
        {
            cout << "Gagne !" << endl;
            return 0;
        }
        else if (proposition < nombreMystere)
        {
            cout << "Trop petit." << endl;
        }
        else
        {
            cout << "Trop grand." << endl;
        }

        chances--;

        cout << "Chances restantes : " << chances << endl;
    }

    cout << "Perdu !" << endl;
    cout << "Le nombre mystere etait : " << nombreMystere << endl;

    return 0;
}