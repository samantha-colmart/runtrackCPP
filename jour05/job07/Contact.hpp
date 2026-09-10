#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

using namespace std;

class Contact
{
private:
    string nom;
    int numero;

public:
    // Constructeur
    Contact(string nom, int numero)
        : nom(nom), numero(numero)
    {
    }

    // Constructeur de copie
    Contact(const Contact& autre)
        : nom(autre.nom), numero(autre.numero)
    {
    }

    void modifierNumero(int nouveauNumero)
    {
        numero = nouveauNumero;
    }

    void afficher()
    {
        cout << "Nom : " << nom << endl;
        cout << "Numero : " << numero << endl;
    }
};

#endif