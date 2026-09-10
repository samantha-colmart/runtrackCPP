#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include <iostream>
#include <string>

using namespace std;

class Etudiant
{
private:
    string nom;
    string prenom;
    int age;
    int matricule;

public:
    Etudiant(string nom, string prenom, int age, int matricule)
        : nom(nom), prenom(prenom), age(age), matricule(matricule)
    {
    }

    void afficher()
    {
        cout << "Nom : " << nom << endl;
        cout << "Prenom : " << prenom << endl;
        cout << "Age : " << age << endl;
        cout << "Matricule : " << matricule << endl;
    }
};

#endif