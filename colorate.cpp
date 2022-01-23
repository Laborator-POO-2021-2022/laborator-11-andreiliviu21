#include "colorate.hpp"

Colorate::Colorate() {
    varsta = 0;
    nume = NULL;
    descriere = NULL;
    vaccin = 0; //adica nu are vaccin
}

Colorate::Colorate(float age, const char* name, const char* description, int vaccination) {
    this->varsta = age;
    this->vaccin = vaccination;
    this->nume = new char[strlen(name) + 1];
    strcpy(this->nume, name);
    this->descriere = new char[strlen(description) + 1];
    strcpy(this->descriere, description);
}

char* Colorate::getDescriere() {
    return descriere;
}

void Colorate::afisare() {
    std::cout << "Varsta: " << varsta << std::endl;
    std::cout << "Nume: " << nume << std::endl;
    std::cout << "Descriere: " << descriere << std::endl;
    if (vaccin == 1) {
        std::cout << "Vaccin: DA" << std::endl;
    } else std::cout << "Vaccin: NU" << std::endl;
}

char* Colorate::getCategorie() {
    if(varsta >= 0 && varsta <= 1) {
        return (char*)"Pui";
    } else if (varsta > 1 && varsta <=3) {
        return (char*)"Tanar";
    } else return (char*)"Matur";
}

int Colorate::getVaccin() {
    return vaccin;
}

int Colorate::getClassType() {
    return 2;
}

Colorate::~Colorate() {
    delete[] nume;
    delete[] descriere;
}
