#include <iostream>
#include <string>

using namespace std;

bool estIncluse(string chaine1, string chaine2)
{
    if (chaine2.find(chaine1) != string::npos)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    string chaine1;
    string chaine2;

    cout << "Entrez la premiere chaine : ";
    getline(cin, chaine1);

    cout << "Entrez la deuxieme chaine : ";
    getline(cin, chaine2);

    if (estIncluse(chaine1, chaine2))
    {
        cout << "Vrai" << endl;
    }
    else
    {
        cout << "Faux" << endl;
    }

    return 0;
}