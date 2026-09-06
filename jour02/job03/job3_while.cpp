#include <iostream>

using namespace std;

int main(void)
{
    int i = 0;
    int n;
    int sum = 0;

    while (i < 4)
    {
        cout << "Donnez un entier : ";
        cin >> n;

        sum += n;
        i++;
    }

    cout << "Somme : " << sum << endl;

    return 0;
}