#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string texte;
    char tab[100];

    cout << "Entrez une chaine de caracteres : ";
    getline(cin, texte);

    int i;

    for (i = 0; i < texte.length(); i++)
    {
        tab[i] = texte[i];
    }

    tab[i] = '\0';

    cout << "Contenu du tableau : " << tab << endl;

    return 0;
}