#include <iostream>

using namespace std;

int main(void)
{
    int number = 2019;
    int *pointeur = &number;

    cout << "La valeur de \"number\" est : " << *pointeur << endl;

    return 0;
}