#include <iostream>

using namespace std;

int main(void)
{
    float prixHT;
    float kilos;
    float tva;
    float totalHT;
    float prixTTC;

    cout << "Entrez le prix HT d'un kilo de carottes : ";
    cin >> prixHT;

    cout << "Entrez le nombre de kilos : ";
    cin >> kilos;

    cout << "Entrez le taux de TVA : ";
    cin >> tva;

    totalHT = prixHT * kilos;

    prixTTC = totalHT * (1 + tva / 100);

    cout << "Le prix TTC est : " << prixTTC << " euros" << endl;

    return 0;
}