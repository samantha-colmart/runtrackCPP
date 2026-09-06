#include <iostream>

using namespace std;

int main(void)
{
    float note;

    cout << "Entrez une note entre 0 et 20 : ";
    cin >> note;

    if (note < 0 || note > 20)
    {
        cout << "Note invalide." << endl;
    }
    else if (note > 10)
    {
        cout << "Valide" << endl;
    }
    else
    {
        cout << "Non valide" << endl;
    }

    return 0;
}