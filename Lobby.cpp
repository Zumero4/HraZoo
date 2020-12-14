//
// Created by Dave on 14.12.2020.
//

#include "Lobby.h"

Lobby::Lobby(std::string rasa):Mistnost(rasa){

}

/*Kazda mistnost jiny popis moznost nepritele a bude moznost obsahovat predmety
 stejny princip jak nepritel(truhla, jidlo, zbran)
 */
void Lobby::print() {
    std::cout << " Toto je vstupni mistnost hradu. ";
    if (m_protivnik != nullptr){
        std::cout<<"V teto mistnosti je nepritel: "<< m_protivnik->getRasa() <<std::endl;
    }else{
        std::cout<<"Nic tu neni."<<std::endl;
    }
}