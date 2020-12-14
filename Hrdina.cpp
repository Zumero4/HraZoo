//
// Created by Dave on 13.12.2020.
//

#include "Hrdina.h"

Hrdina::Hrdina(std::string jmeno,int zivoty, int sila, std::string rasa){
    m_jmeno = jmeno;
    m_zivoty = zivoty;
    m_sila = sila;
    m_rasa = rasa;
}

void Hrdina::printInfo(){
    std::cout << m_rasa <<" " << m_jmeno << "\n";
    std::cout << "zivoty: " << m_zivoty << "\n";
    std::cout << "sila: " << m_sila << "\n";
    std::cout << "zbran: " << "nic" << "\n";    //dodelat zbran brneni na vypis
    std::cout << "brneni: " << " nic" << std::endl;
}
/*
int Hrdina::getZivoty(){
    if(m_brneni == nullptr){
        return m_zivoty;
    }else{
        return m_zivoty  + Brneni->getBonusZivotu();
    }
}*/

/*
int Hrdina::getSila(){
    if (m_zbran == nullptr){
        return m_sila;
    }else{
        return m_sila + Zbran->getBonusUtoku();
    }
}*/

void Hrdina::uberZivoty(int oKolik){
    m_zivoty -= oKolik;
    if (m_zivoty <= 0){
        std::cout << m_rasa << " " << m_jmeno << " je mrtev. \n" << "Konec hry!" << std::endl;
    }
}

Hrdina* Hrdina::createHrdina(std::string jmeno, std::string rasa) {
    Hrdina* novyHrdina = nullptr;

    if (rasa == "elf") {
        novyHrdina = new Hrdina(jmeno, 120, 50, rasa);
    } else if(rasa == "trpaslik"){
        novyHrdina = new Hrdina(jmeno, 70, 65, rasa);
    }else if (rasa == "ork"){
        novyHrdina = new Hrdina(jmeno, 200, 25, rasa);
    }else{
         std::cout<< "chyba";

    }
    return novyHrdina;
}



