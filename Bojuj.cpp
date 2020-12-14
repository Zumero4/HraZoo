//
// Created by Dave on 14.12.2020.
//

#include "Bojuj.h"

Bojuj::Bojuj(std::string popis):Interakce(popis){

}

void Bojuj::interaguj(Hrdina* kdo, Protivnik* skym){
    std::cout <<"Boj! " << kdo->getJmeno() << " a " << skym->getRasa() << std::endl;

    if(kdo->getSila() > skym->getSila()){
        skym->uberZivoty(kdo->getSila());
    }else{
        kdo->uberZivoty(skym->getSila());
    }
    std::cout << "Konec boje " << kdo->getJmeno() << " a " << skym->getRasa() << std::endl;
}