#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Voyage
{
    string destination;
    double tempsVol;
};

int main(void)
{
    int nombre;

    cout << "Combien de destinations voulez-vous entrer ? : ";
    cin >> nombre;

    vector<Voyage*> voyages;

    for (int i = 0; i < nombre; i++)
    {
        Voyage* voyage = new Voyage;

        cout << "Destination " << i + 1 << " : ";
        cin >> voyage->destination;

        cout << "Temps de vol depuis Marseille : ";
        cin >> voyage->tempsVol;

        voyages.push_back(voyage);
    }

    cout << endl;
    cout << "Liste des voyages :" << endl;

    for (int i = 0; i < voyages.size(); i++)
    {
        cout << "Destination : " << voyages[i]->destination << endl;
        cout << "Temps de vol : " << voyages[i]->tempsVol << " heures" << endl;
    }

    // Modification des donnees
    for (int i = 0; i < voyages.size(); i++)
    {
        cout << endl;
        cout << "Nouveau temps de vol pour "
             << voyages[i]->destination << " : ";

        cin >> voyages[i]->tempsVol;
    }

    cout << endl;
    cout << "Donnees modifiees :" << endl;

    for (int i = 0; i < voyages.size(); i++)
    {
        cout << voyages[i]->destination
             << " : "
             << voyages[i]->tempsVol
             << " heures" << endl;
    }

    for (int i = 0; i < voyages.size(); i++)
    {
        delete voyages[i];
    }

    return 0;
}