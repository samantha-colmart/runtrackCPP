#include <iostream>
#include <string>

using namespace std;

struct Staff
{
    string lastname;
    string firstname;
};

struct Student
{
    string lastname;
    string firstname;
};

int main(void)
{
    Staff staff[2] =
    {
        {"Cordial", "Alicia"},
        {"Malarier", "Pierre"}
    };

    cout << "Prenoms du staff :" << endl;

    for (int i = 0; i < 2; i++)
    {
        cout << staff[i].firstname << endl;
    }

    int nombre;

    cout << endl;
    cout << "Combien d'etudiants voulez-vous entrer ? : ";
    cin >> nombre;

    Student* students = new Student[nombre];

    for (int i = 0; i < nombre; i++)
    {
        cout << "Nom de l'etudiant " << i + 1 << " : ";
        cin >> students[i].lastname;

        cout << "Prenom de l'etudiant " << i + 1 << " : ";
        cin >> students[i].firstname;
    }

    cout << endl;
    cout << "Prenoms des etudiants :" << endl;

    for (int i = 0; i < nombre; i++)
    {
        cout << students[i].firstname << endl;
    }

    delete[] students;

    return 0;
}