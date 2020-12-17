//
// Created by Dave on 14.12.2020.
//

#include "Bojuj.h"

Bojuj::Bojuj(std::string popis):Interakce(popis){

}

void Bojuj::interaguj(Hrdina* kdo, Protivnik* skym){
    std::cout <<"Boj! " << kdo->getJmeno() << " a " << skym->getRasa() << std::endl;


    while(skym->getZivoty()>0){
        skym->uberZivoty(kdo->getSila());
        kdo->uberZivoty(skym->getSila());
    }

    std::cout << "Konec boje " << kdo->getJmeno() << " a " << skym->getRasa() << std::endl <<kdo->getJmeno() << " zbylo ti : " << kdo->getZivoty() << " zivotu \n" << std::endl;
    if (kdo->getZivoty()<0){
        std::cout << " Umrel jsi. Konec hry. " << std::endl;
    }
}