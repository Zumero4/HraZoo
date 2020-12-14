//
// Created by Dave on 14.12.2020.
//

#include "Jeskyne.h"

Jeskyne::Jeskyne(std::string rasa):Mistnost(rasa){

}

void Jeskyne::print() {
    std::cout << " Prave si vesel do posledni mistnosti. Pokud prezijes tuto mistnost, vyhral jsi ";
    if (m_protivnik != nullptr){
        std::cout<<"V teto mistnosti je nepritel: "<< m_protivnik->getRasa() <<std::endl;
    }else{
        std::cout<<"Nic tu neni."<<std::endl;
    }
}