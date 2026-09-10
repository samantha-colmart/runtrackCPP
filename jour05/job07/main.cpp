#include "Contact.hpp"

int main(void)
{
    Contact contact1("Samantha", 123456);
    Contact contact2("Paul", 654321);
    Contact contact3("Julie", 987654);

    // Copies
    Contact copie1(contact1);
    Contact copie2(contact2);
    Contact copie3(contact3);

    // On modifie uniquement les copies
    copie1.modifierNumero(111111);
    copie2.modifierNumero(222222);
    copie3.modifierNumero(333333);

    cout << "=== Contact 1 ===" << endl;
    contact1.afficher();

    cout << endl << "=== Copie 1 ===" << endl;
    copie1.afficher();

    cout << endl << "=== Contact 2 ===" << endl;
    contact2.afficher();

    cout << endl << "=== Copie 2 ===" << endl;
    copie2.afficher();

    cout << endl << "=== Contact 3 ===" << endl;
    contact3.afficher();

    cout << endl << "=== Copie 3 ===" << endl;
    copie3.afficher();

    return 0;
}