#include "Animal.hpp"

int main(void)
{
    Chien chien;
    Chat chat;

    cout << "=== Chien ===" << endl;
    chien.crier();
    chien.manger();

    cout << endl;

    cout << "=== Chat ===" << endl;
    chat.crier();
    chat.manger();

    return 0;
}