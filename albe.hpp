#ifndef ALBE_HPP
#define ALBE_HPP
#include "cafenea.hpp"

class Albe: public Cafenea {
private:
    float varsta;
    char *nume;
    char *descriere;
    int vaccin; //0 daca nu are vaccin, 1 daca are;

public:
    Albe();
    Albe(float, const char*, const char*, int);

    char* getDescriere();
    void afisare();
    char* getCategorie();
    int getVaccin();
    int getClassType();
    ~Albe();
};
#endif