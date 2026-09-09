#include <iostream>

using namespace std;

int main(void)
{
    int x = 12;

    int& reference = x;

    cout << "Avant modification : " << x << endl;

    reference = 25;

    cout << "Apres modification : " << x << endl;

    return 0;
}