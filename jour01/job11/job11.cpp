#include <iostream>

using namespace std;

int main(void)
{
    int n;
    int m;
    int temp;

    cout << "Entrez n : ";
    cin >> n;

    cout << "Entrez m : ";
    cin >> m;

    cout << "Avant l'echange : n = " << n << " et m = " << m << endl;

    temp = n;
    n = m;
    m = temp;

    cout << "Apres l'echange : n = " << n << " et m = " << m << endl;

    return 0;
}