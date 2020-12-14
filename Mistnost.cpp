//
// Created by Dave on 14.12.2020.
//

#include "Mistnost.h"

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