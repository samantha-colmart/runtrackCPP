#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string texte = "vive la plateforme !";

    for (int i = 0; i < texte.length(); i++)
    {
        if (texte[i] != 'a' &&
            texte[i] != 'e' &&
            texte[i] != 'i' &&
            texte[i] != 'o' &&
            texte[i] != 'u' &&
            texte[i] != 'y')
        {
            cout << texte[i];
        }
    }

    cout << endl;

    return 0;
}