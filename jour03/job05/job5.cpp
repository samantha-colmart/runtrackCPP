#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(void)
{
    string heure;

    cout << "Entrez une heure au format XXhXX : ";
    cin >> heure;

    if (heure.length() == 5 &&
        isdigit(heure[0]) &&
        isdigit(heure[1]) &&
        heure[2] == 'h' &&
        isdigit(heure[3]) &&
        isdigit(heure[4]))
    {
        int heures = stoi(heure.substr(0, 2));
        int minutes = stoi(heure.substr(3, 2));

        if (heures >= 0 && heures <= 23 &&
            minutes >= 0 && minutes <= 59)
        {
            cout << "Heure valide" << endl;
        }
        else
        {
            cout << "Heure invalide" << endl;
        }
    }
    else
    {
        cout << "Format invalide" << endl;
    }

    return 0;
}