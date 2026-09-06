#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(void)
{
    string texte = "vive la plateforme !";

    for (int i = 0; i < texte.length(); i++)
    {
        texte[i] = toupper(texte[i]);
    }

    cout << texte << endl;

    return 0;
}