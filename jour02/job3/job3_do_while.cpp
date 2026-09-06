#include <iostream>

using namespace std;

int main(void)
{
    int i = 0;
    int n;
    int sum = 0;

    do
    {
        cout << "Donnez un entier : ";
        cin >> n;

        sum += n;
        i++;
    }
    while (i < 4);

    cout << "Somme : " << sum << endl;

    return 0;
}