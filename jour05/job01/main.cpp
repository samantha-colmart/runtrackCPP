#include "Joueur.hpp"

int main(void)
{
    Joueur joueur;

    joueur.initialiser(0, 0);

    joueur.afficher();

    joueur.deplacer(2, 3);
    joueur.afficher();

    joueur.deplacer(1, -2);
    joueur.afficher();

    return 0;
}