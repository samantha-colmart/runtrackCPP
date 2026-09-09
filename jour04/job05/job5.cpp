#include <iostream>

using namespace std;

struct Point
{
    int x;
    int y;
};

int main(void)
{
    Point point;

    point.x = 10;
    point.y = 20;

    Point *pointeur = &point;

    cout << "Avant modification :" << endl;
    cout << "x = " << pointeur->x << endl;
    cout << "y = " << pointeur->y << endl;

    pointeur->x = 50;
    pointeur->y = 100;

    cout << "Apres modification :" << endl;
    cout << "x = " << pointeur->x << endl;
    cout << "y = " << pointeur->y << endl;

    return 0;
}