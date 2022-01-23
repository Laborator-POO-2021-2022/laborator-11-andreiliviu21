#include "cafenea.hpp"
#include "albe.hpp"
#include "colorate.hpp"
#include "negre.hpp"


int main() {
    Cafenea** vector;
    vector = new Cafenea*[10];
    //incrediente tiramisu
    vector[0] = new Albe (1.5, "White Sugar", "Alba", 1);
    vector[1] = new Negre (2.5, "Brewed Espresso", "Cafenie", 0);
    vector[2] = new Albe (5, "Mascarpone", "Alburie", 1);
    vector[3] = new Colorate (3, "Heavy Cream", "Alba", 0);
    vector[4] = new Colorate (2, "Bittersweet chocolate", "MILKA", 1);
    vector[5] = new Albe (7, "Butter", "Foarte alba", 0);
    vector[6] = new Negre (0.5, "Rum", "Yummm", 1);
    vector[7] = new Colorate (1, "Cocoa", "Maro", 1);
    vector[8] = new Negre (0, "Coffee", "Foarte neagra", 1);
    vector[9] = new Colorate (1, "Galbenus", "Galbena", 0);

    std::cout << "=======================================" << std::endl;
	
    //in cate zile cafeneaua ajunge la 50% capacitate
    short int initial = 300;
    short int final  = initial /2;
    short int no_days = 0;
    while(initial > final) {
        initial = initial -5 + 3;
        no_days++;
    }
    std::cout << "Cafeneaua ajunge la <=50% ocupare in: " << no_days << " zile."<< std::endl; 
    std::cout << "=======================================" << std::endl;


    //cata mancare se consuma in 100 de zile. O pisica mananca 100g pe zi.
    initial = 300;
    short int zile = 100;
    float kilograme_mancare = 0;
    while (zile > 0) {
        kilograme_mancare = kilograme_mancare + initial * 0.1;
        initial = initial -5 +3;
        zile--;
    }
    std::cout << "In 100 de zile se mananca " << kilograme_mancare <<" kilograme." << std::endl;
    std::cout << "=======================================" << std::endl;

    //detalii categorie 
    short int contor_pui = 0;
    short int contor_pui_vaccin = 0;
    short int contor_pui_negre = 0;
    short int contor_pui_colorate = 0;
    short int contor_pui_albe = 0;

    short int contor_tinere = 0;
    short int contor_tinere_vaccin = 0;
    short int contor_tinere_negre = 0;
    short int contor_tinere_colorate = 0;
    short int contor_tinere_albe = 0;

    short int contor_mature = 0;
    short int contor_mature_vaccin = 0;
    short int contor_mature_negre = 0;
    short int contor_mature_colorate = 0;
    short int contor_mature_albe = 0;

    for(int i = 0 ; i < 10 ; i ++) {
        if(strcmp(vector[i]->getCategorie(), "Pui") == 0) {
            contor_pui++;
            if(vector[i]->getVaccin() == 1) {
                contor_pui_vaccin++;
            }
            if(vector[i]->getClassType() == 0) {
                contor_pui_albe++;
            } else if(vector[i]->getClassType() == 1) {
                contor_pui_negre++;
            } else if(vector[i]->getClassType() == 2) {
                contor_pui_colorate++;
            }
        } else if(strcmp(vector[i]->getCategorie(), "Tanar") == 0) {
            contor_tinere++;
            if(vector[i]->getVaccin() == 1) {
                contor_tinere_vaccin++;
            }
            if(vector[i]->getClassType() == 0) {
                contor_tinere_albe++;
            } else if(vector[i]->getClassType() == 1) {
                contor_tinere_negre++;
            } else if(vector[i]->getClassType() == 2) {
                contor_tinere_colorate++;
            }
        } else {
            contor_mature++;
            if(vector[i]->getVaccin() == 1) {
                contor_mature_vaccin++;
            }
            if(vector[i]->getClassType() == 0) {
                contor_mature_albe++;
            } else if(vector[i]->getClassType() == 1) {
                contor_mature_negre++;
            } else if(vector[i]->getClassType() == 2) {
                contor_mature_colorate++;
            }
        }
    }
    std::cout << "\nINFORMATII DESPRE FIECARE CATEGORIE DE VARSTA:\n"<< std::endl;
    std::cout << "Pisici pui: " << contor_pui << std::endl;
    std::cout << "Contor pui vaccinate: " << contor_pui_vaccin << std::endl; 
    std::cout << "Contor pui negre: : " << contor_pui_negre << std::endl; 
    std::cout << "Contor pui albe: : " << contor_pui_albe << std::endl; 
    std::cout << "Contor pui colorate: : " << contor_pui_colorate << std::endl; 
    std::cout << "----------------" << std::endl;
    
    std::cout << "Contor tinere: " << contor_tinere << std::endl; 
    std::cout << "Contor tinere vaccinate: " << contor_tinere_vaccin << std::endl; 
    std::cout << "Contor tinere negre: : " << contor_tinere_negre << std::endl; 
    std::cout << "Contor tinere albe: : " << contor_tinere_albe << std::endl; 
    std::cout << "Contor tinere colorate: : " << contor_tinere_colorate << std::endl; 
    std::cout << "----------------" << std::endl;

    std::cout << "Contor mature: " << contor_mature << std::endl;
    std::cout << "Contor mature vaccinate: " << contor_mature_vaccin << std::endl; 
    std::cout << "Contor mature negre: : " << contor_mature_negre << std::endl; 
    std::cout << "Contor mature albe: : " << contor_mature_albe << std::endl; 
    std::cout << "Contor mature colorate: : " << contor_mature_colorate << std::endl; 
    std::cout << "=======================================" << std::endl;


    // top 3 pisici
    Cafenea* aux;
    for(int i = 0 ; i < 10 ; i ++) {
        for(int j = i+1; j < 9; j++) {
            if(strlen(vector[i]->getDescriere()) < strlen(vector[j]->getDescriere())) {
                aux = vector[i];
				vector[i] = vector[j];
				vector[j] = aux;
            }
        }
    }
    std::cout << "\nTOP 3 PISICI(cu cea mai mare descriere): "<< std::endl;
    for(int i = 0 ; i < 3 ; i ++) {
	    vector[i]->afisare();
        std::cout << "-------------" << std::endl;
    }
    std::cout << "=======================================" << std::endl;

    for(int i = 0 ; i < 10 ; i ++) {
        delete vector[i];
    }
    delete[] vector;
    return 0;
}