//
// Created by Dave on 14.12.2020.
//

#include "Protivnik.h"

Protivnik::Protivnik(std::string rasa, int zivoty, int sila){
    m_rasa = rasa;
    m_zivoty = zivoty;
    m_sila = sila;
}


Protivnik* Protivnik::createProtivnik(std::string rasa){
    Protivnik* novyProtivnik = nullptr;

    if (rasa == "vlk") {
        novyProtivnik = new Protivnik(rasa, 60,10);
    } else if(rasa == "medved"){
        novyProtivnik = new Protivnik(rasa, 100, 20);
    }else if (rasa == "drak"){
        novyProtivnik = new Protivnik(rasa, 200, 30);
    }else{
        std::cout<< "chyba";

    }
    return novyProtivnik;
}

std::string Protivnik::getRasa(){
    return m_rasa;
}

void Protivnik::printInfo(){
    std::cout<< m_rasa << " ma " <<m_zivoty << "zivotu a silu ma " << m_sila<< std::endl;
}

int Protivnik::getSila(){
    return m_sila;
}

int Protivnik::getZivoty(){
    return m_zivoty;
}


void Protivnik::uberZivoty(int oKolik){
    m_zivoty -= oKolik;
    if (m_zivoty <= 0){
        std::cout << m_rasa << "  je mrtev. Muzes jit dal. \n" << std::endl;
    }
}