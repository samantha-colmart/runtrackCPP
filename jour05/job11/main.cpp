#include <iostream>
#include "Operation.hpp"

using namespace std;

int main(void)
{
    Operation a(10);
    Operation b(5);

    Operation addition = a + b;
    Operation soustraction = a - b;
    Operation multiplication = a * b;
    Operation division = a / b;

    cout << "Addition : " << addition.getNombre() << endl;
    cout << "Soustraction : " << soustraction.getNombre() << endl;
    cout << "Multiplication : " << multiplication.getNombre() << endl;
    cout << "Division : " << division.getNombre() << endl;

    return 0;
}