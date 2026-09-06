#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string chaine1;
    string chaine2;

    cout << "Entrez la premiere chaine : ";
    getline(cin, chaine1);

    cout << "Entrez la deuxieme chaine : ";
    getline(cin, chaine2);

    if (chaine1 == chaine2)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
    }

    return 0;
}