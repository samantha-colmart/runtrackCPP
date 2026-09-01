#include <iostream>

int main()
{
    char c = '\x01';
    short int p = 10;

    int x = p + 3;
    int y = c + 1;
    int z = p + c;
    int w = 3 * p + 5 * c;

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << "z = " << z << std::endl;
    std::cout << "w = " << w << std::endl;

    return 0;
}