#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    std::string string;
    std::string string2 = "Bonjour";

    cout << "Entrez une chaine de caracteres : ";
    getline(cin, string);

    if (string < string2)
    {
        cout << string << endl;
        cout << string2 << endl;
    }
    else
    {
        cout << string2 << endl;
        cout << string << endl;
    }

    return 0;
}