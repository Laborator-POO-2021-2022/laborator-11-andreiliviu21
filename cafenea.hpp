#ifndef CAFENEA_HPP
#define CAFENEA_HPP
#include <iostream>
#include <cstring>
#pragma warning(disable: 4996)

class Cafenea {
public:
    virtual ~Cafenea();
    virtual char* getDescriere() = 0;
    virtual void afisare() = 0;
    virtual char* getCategorie() = 0;
    virtual int getVaccin() = 0;
    virtual int getClassType() = 0;

};
#endif