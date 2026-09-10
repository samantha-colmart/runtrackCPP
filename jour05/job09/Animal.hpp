#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

using namespace std;

class Animal
{
private:
    static int totalAnimaux;

public:
    Animal()
    {
        totalAnimaux++;
    }

    static int getTotalAnimaux()
    {
        return totalAnimaux;
    }

    virtual void crier() = 0;
    virtual void manger() = 0;
};

int Animal::totalAnimaux = 0;


class Chien : public Animal
{
public:
    void crier()
    {
        cout << "Woof!" << endl;
    }

    void manger()
    {
        cout << "Le chien a une alimentation variée." << endl;
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