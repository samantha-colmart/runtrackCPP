#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

using namespace std;

class Animal
{
public:
    virtual void crier() = 0;
    virtual void manger() = 0;
};

class Chien : public Animal
{
public:
    void crier()
    {
        cout << "Woof!" << endl;
    }

    void manger()
    {
        cout << "Le chien a une alimentation variee." << endl;
    }
};

class Chat : public Animal
{
public:
    void crier()
    {
        cout << "Miaou!" << endl;
    }

    void manger()
    {
        cout << "Le chat mange du poisson." << endl;
    }
};

#endif