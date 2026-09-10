#ifndef OPERATION_HPP
#define OPERATION_HPP

class Operation
{
private:
    double nombre;

public:
    Operation(double n)
    {
        nombre = n;
    }

    Operation operator+(const Operation& autre)
    {
        return Operation(nombre + autre.nombre);
    }

    Operation operator-(const Operation& autre)
    {
        return Operation(nombre - autre.nombre);
    }

    Operation operator*(const Operation& autre)
    {
        return Operation(nombre * autre.nombre);
    }

    Operation operator/(const Operation& autre)
    {
        return Operation(nombre / autre.nombre);
    }

    double getNombre()
    {
        return nombre;
    }
};

#endif