//
// Created by Dave on 14.12.2020.
//

#include "Mistnost.h"

/*kdyz vkladam nepritele do mistnosti staci zadat rasu, a podle ni ma neprite vlastnosti
  protivnik.cpp stejne jak u vytvareni hrdiny*/
Mistnost::Mistnost(std::string rasa){
    if (rasa == " "){
        m_protivnik = nullptr;
    }else {
        m_protivnik = Protivnik::createProtivnik(rasa);
    }
}

Mistnost::~Mistnost(){
    if (m_protivnik != nullptr) {
        delete m_protivnik;
    }
}