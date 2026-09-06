#include <iostream>

using namespace std;

int main(void)
{
    int n;

    cin >> n;

    switch (n)
    {
        case 0:
            cout << "Nul\n";

        case 1:
        case 2:
            cout << "Petit\n";
            break;

        case 3:
        case 4:
        case 5:
            cout << "Moyen\n";

        default:
            cout << "Grand\n";
    }

    // Resultats :
    // n = 0  : Nul puis Petit
    // n = 1  : Petit
    // n = 4  : Moyen puis Grand
    // n = 10 : Grand
    // n = -5 : Grand

    return 0;
}