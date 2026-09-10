#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>

using namespace std;

class Joueur
{
private:
    int x;
    int y;

public:
    Joueur(int positionX, int positionY)
        : x(positionX), y(positionY)
    {
    }

    void afficher()
    {
        cout << "Position du joueur : "
             << x << ", " << y << endl;
    }

    void deplacer(int deplacementX, int deplacementY)
    {
        x = x + deplacementX;
        y = y + deplacementY;
    }
};

#endif