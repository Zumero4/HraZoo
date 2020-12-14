//
// Created by Dave on 14.12.2020.
//

#include "Interakce.h"

Interakce::Interakce(std::string popis){
    m_popis = popis;
}

std::string Interakce::getPopis(){
    return m_popis;
}

//void Interakce::interaguj(Hrdina* kdo, Protivnik* skym){
//    vypisPopisAkce();
//}

//void Interakce::vypisPopisAkce() {
 //   std::cout << "Akce: " << m_popis << std::endl;
//}