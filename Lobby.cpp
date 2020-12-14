//
// Created by Dave on 14.12.2020.
//

#include "Lobby.h"

Lobby::Lobby(std::string rasa):Mistnost(rasa){

}

void Lobby::print() {
    std::cout << " Toto je vstupni mistnost hradu. ";
    if (m_protivnik != nullptr){
        std::cout<<"V teto mistnosti je nepritel: "<< m_protivnik->getRasa() <<std::endl;
    }else{
        std::cout<<"Nic tu neni."<<std::endl;
    }
}