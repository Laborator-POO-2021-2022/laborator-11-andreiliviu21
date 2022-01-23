#ifndef COLORATE_HPP
#define COLORATE_HPP
#include "cafenea.hpp"

class Colorate: public Cafenea {
private:
    float varsta;
    char *nume;
    char *descriere;
    int vaccin; //0 daca nu are vaccin, 1 daca are;

public:
    Colorate();
    Colorate(float, const char*, const char*, int);
    char* getDescriere();
    void afisare();
    char* getCategorie();
    int getVaccin();
    int getClassType();
    ~Colorate();    
};
#endif