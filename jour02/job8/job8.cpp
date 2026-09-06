#include <iostream>

using namespace std;

int main(void)
{
    int a;
    int b;

    cout << "Entrez a : ";
    cin >> a;

    cout << "Entrez b : ";
    cin >> b;

    int i = a;

    while (i <= b)
    {
        cout << i << endl;
        i++;
    }

    return 0;
}