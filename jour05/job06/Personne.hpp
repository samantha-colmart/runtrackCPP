#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <iostream>
#include <string>

using namespace std;

class Personne
{
private:
    string nom;
    int pointsDeVie;
    float defense;

public:
    // Constructeur avec liste d'initialisation
    Personne(string nom, int pointsDeVie, float defense)
        : nom(nom), pointsDeVie(pointsDeVie), defense(defense)
    {
    }

    void afficher()
    {
        cout << "Nom : " << nom << endl;
        cout << "Points de vie : " << pointsDeVie << endl;
        cout << "Defense : " << defense << endl;
    }

    void modifierPointsDeVie(int nouveauxPointsDeVie)
    {
        pointsDeVie = nouveauxPointsDeVie;
    }

    void modifierDefense(float nouvelleDefense)
    {
        defense = nouvelleDefense;
    }
};

#endif