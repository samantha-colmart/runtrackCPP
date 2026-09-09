#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string chaine;

    cout << "Entrez une chaine de caracteres : ";
    getline(cin, chaine);

    char *debut = &chaine[0];
    char *fin = &chaine[chaine.length() - 1];

    while (debut < fin)
    {
        char temporaire = *debut;

        *debut = *fin;
        *fin = temporaire;

        debut++;
        fin--;
    }

    cout << "Chaine inversee : " << chaine << endl;

    return 0;
}