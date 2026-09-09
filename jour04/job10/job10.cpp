#include <iostream>
#include <string>

using namespace std;

struct Etudiant
{
    string lastname;
    string firstname;
    double note;
};

int main(void)
{
    int taille = 100;
    Etudiant* notes = new Etudiant[taille];

    int nombreNotes = 0;
    int choix = 0;

    while (choix != 5)
    {
        cout << endl;
        cout << "Menu :" << endl;
        cout << "1. Ajouter une note" << endl;
        cout << "2. Afficher la liste de notes" << endl;
        cout << "3. Supprimer une note d'un etudiant" << endl;
        cout << "4. Afficher la moyenne des notes" << endl;
        cout << "5. Quitter" << endl;

        cout << "Choix : ";
        cin >> choix;

        switch (choix)
        {
            case 1:
            {
                if (nombreNotes < taille)
                {
                    cout << "Nom : ";
                    cin >> notes[nombreNotes].lastname;

                    cout << "Prenom : ";
                    cin >> notes[nombreNotes].firstname;

                    cout << "Note : ";
                    cin >> notes[nombreNotes].note;

                    nombreNotes++;

                    cout << "Note ajoutee." << endl;
                }

                break;
            }

            case 2:
            {
                if (nombreNotes == 0)
                {
                    cout << "Aucune note." << endl;
                }
                else
                {
                    for (int i = 0; i < nombreNotes; i++)
                    {
                        cout << i + 1 << ". "
                             << notes[i].lastname << " "
                             << notes[i].firstname << " : "
                             << notes[i].note << endl;
                    }
                }

                break;
            }

            case 3:
            {
                int numero;

                cout << "Numero de la note a supprimer : ";
                cin >> numero;

                if (numero >= 1 && numero <= nombreNotes)
                {
                    for (int i = numero - 1; i < nombreNotes - 1; i++)
                    {
                        notes[i] = notes[i + 1];
                    }

                    nombreNotes--;

                    cout << "Note supprimee." << endl;
                }
                else
                {
                    cout << "Numero invalide." << endl;
                }

                break;
            }

            case 4:
            {
                if (nombreNotes == 0)
                {
                    cout << "Aucune note." << endl;
                }
                else
                {
                    double somme = 0;

                    for (int i = 0; i < nombreNotes; i++)
                    {
                        somme += notes[i].note;
                    }

                    double moyenne = somme / nombreNotes;

                    cout << "Moyenne des notes : "
                         << moyenne << endl;
                }

                break;
            }

            case 5:
            {
                cout << "Au revoir." << endl;
                break;
            }

            default:
            {
                cout << "Choix invalide." << endl;
            }
        }
    }

    delete[] notes;

    return 0;
}