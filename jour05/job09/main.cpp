#include "Animal.hpp"

int main(void)
{
    Chien chien1;
    Chien chien2;

    Chat chat1;
    Chat chat2;
    Chat chat3;

    cout << "Nombre total d'animaux : "
         << Animal::getTotalAnimaux()
         << endl;

    return 0;
}