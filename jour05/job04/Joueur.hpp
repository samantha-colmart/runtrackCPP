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

    Joueur()
    {
        this->x = 0;
        this->y = 0;
        this->nom = "Inconnu";
    }

    Joueur(int x, int y)
    {
        this->x = x;
        this->y = y;
        this->nom = "Inconnu";
    }

    Joueur(int x, int y, string nom)
    {
        this->x = x;
        this->y = y;
        this->nom = nom;
    }

    void afficher()
    {
        cout << "Joueur : " << this->nom
             << " | x = " << this->x
             << " | y = " << this->y << endl;
    }

    void deplacer(int x, int y)
    {
        this->x = this->x + x;
        this->y = this->y + y;
    }
};

#endif