#include <iostream>

using namespace std;

int main(void)
{
    int n;

    cout << "Entrez un nombre : ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}