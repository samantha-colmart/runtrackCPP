#include <iostream>

using namespace std;

int main(void)
{
    int limite;
    int a = 0;
    int b = 1;
    int suivant;

    cout << "Entrez une limite : ";
    cin >> limite;

    while (a <= limite)
    {
        cout << a << " ";

        suivant = a + b;
        a = b;
        b = suivant;
    }

    cout << endl;

    return 0;
}