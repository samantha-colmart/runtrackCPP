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

    for (int i = a; i <= b; i++)
    {
        cout << i << endl;
    }

    return 0;
}