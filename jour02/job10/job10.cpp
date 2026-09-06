#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    float nombre;

    do
    {
        cout << "Donnez un nombre positif : ";
        cin >> nombre;

        if (nombre < 0)
        {
            cout << "SVP positif" << endl;
        }
        else if (nombre > 0)
        {
            cout << "Sa racine carree est : " << sqrt(nombre) << endl;
        }

    } while (nombre != 0);

    return 0;
}