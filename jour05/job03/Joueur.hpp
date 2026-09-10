#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>
#include <string>

using namespace std;

class Joueur
{
private:
    int x;
    int y;
    string nom;

public:

    // Constructeur par défaut
    Joueur()
        : x(0), y(0), nom("Inconnu")
    {
    }

    // Constructeur avec x et y
    Joueur(int positionX, int positionY)
        : x(positionX), y(positionY), nom("Inconnu")
    {
    }

    // Constructeur avec x, y et nom
    Joueur(int positionX, int positionY, string nomJoueur)
        : x(positionX), y(positionY), nom(nomJoueur)
    {
    }

    void afficher()
    {
        cout << "Joueur : " << nom
             << " | x = " << x
             << " | y = " << y << endl;
    }

    void deplacer(int deplacementX, int deplacementY)
    {
        x = x + deplacementX;
        y = y + deplacementY;
    }
};

#endif