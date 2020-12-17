//
// Created by Dave on 17.12.2020.
//

#include "Utec.h"


Utec::Utec(std::string popis):Interakce(popis){

}

void Utec::interaguj(Hrdina* kdo, Protivnik* skym){
    std::cout<< kdo->getJmeno() << "Pokousil si se o utek. Od: " << skym->getRasa() << std::endl ;
    unsigned int x= rand() % 2;
    if (x == 1){
        std::cout << "Utekl jsi a presouvas se do dalsi mistnosti." << std::endl;

    }else{
        kdo->uberZivoty(200);
        std::cout<< skym->getRasa() << "  te zabil do zad pri pokusu o utek. Konec hry" << std::endl;
    }


}