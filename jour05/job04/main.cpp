#include "Joueur.hpp"

int main(void)
{
    Joueur joueur1;
    Joueur joueur2(5, 10);
    Joueur joueur3(15, 20, "Samantha");

    joueur1.afficher();
    joueur2.afficher();
    joueur3.afficher();

    joueur3.deplacer(5, 5);
    joueur3.afficher();

    return 0;
}