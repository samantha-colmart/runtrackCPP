#include <iostream>

using namespace std;

int main(void)
{
    float nombre1;
    float nombre2;
    char operation;

    cout << "Entrez le premier nombre : ";
    cin >> nombre1;

    cout << "Entrez une operation (+, -, *, /) : ";
    cin >> operation;

    cout << "Entrez le deuxieme nombre : ";
    cin >> nombre2;

    switch (operation)
    {
        case '+':
            cout << "Resultat : " << nombre1 + nombre2 << endl;
            break;

        case '-':
            cout << "Resultat : " << nombre1 - nombre2 << endl;
            break;

        case '*':
            cout << "Resultat : " << nombre1 * nombre2 << endl;
            break;

        case '/':
            if (nombre2 != 0)
            {
                cout << "Resultat : " << nombre1 / nombre2 << endl;
            }
            else
            {
                cout << "Division par zero impossible." << endl;
            }
            break;

        default:
            cout << "Operation invalide." << endl;
    }

    return 0;
}