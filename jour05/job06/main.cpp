#include "Personne.hpp"

int main(void)
{
    Personne guerrier("Guerrier", 150, 30.5);
    Personne mage("Mage", 80, 10.5);
    Personne archer("Archer", 100, 20.0);

    cout << "=== Guerrier ===" << endl;
    guerrier.afficher();

    cout << endl << "=== Mage ===" << endl;
    mage.afficher();

    cout << endl << "=== Archer ===" << endl;
    archer.afficher();

    // Modification du guerrier
    guerrier.modifierPointsDeVie(120);
    guerrier.modifierDefense(35.0);

    cout << endl << "=== Guerrier apres modification ===" << endl;
    guerrier.afficher();

    return 0;
}