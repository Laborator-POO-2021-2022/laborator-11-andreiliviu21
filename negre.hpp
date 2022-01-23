#ifndef NEGRE_HPP
#define NEGRE_HPP
#include "cafenea.hpp"

class Negre: public Cafenea {
private:
    float varsta;
    char *nume;
    char *descriere;
    int vaccin; //0 daca nu are vaccin, 1 daca are;

public:
    Negre();
    Negre(float, const char*, const char*, int);
    char* getDescriere();
    void afisare();
    char* getCategorie();
    int getVaccin();
    int getClassType();
    ~Negre();
};
#endif