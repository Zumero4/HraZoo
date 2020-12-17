//
// Created by Dave on 13.12.2020.
//

#include "Hrdina.h"
#include "Interakce.h"
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

int Hrdina::getZivoty(){
        return m_zivoty;
}
int Hrdina::getSila(){
        return m_sila;
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


int Hrdina::getPozice(){
    return m_pozice;
}

int Hrdina::jitDal(){
    m_pozice++;
}



void Hrdina::uberZivoty(int oKolik){
    m_zivoty -= oKolik;

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

std::string Hrdina::getJmeno() {
    return m_jmeno;
}

//Inventar

void Hrdina::seberPredmet(Predmet* predmet){
    m_predmety.push_back(predmet);
}

Predmet* Hrdina::getPredmet(int index){
    if((index >= 0) && (index < m_predmety.size())){
        return m_predmety.at(index);
    }else{
        return nullptr;
    }
}

void Hrdina::odeberPredmet(int index){
    if((index > 0) && (index < m_predmety.size())){
        m_predmety.erase(m_predmety.begin()+index);
    }
}

//Interakce

void Hrdina::interaguj(Protivnik* protivnik) {
    vypisInterakce();
    int rozhodnuti = ziskejRozhodnuti();
    m_interakce.at(rozhodnuti)->interaguj(this, protivnik);
}

void Hrdina::naucInterakci(Interakce* interakce) {
    m_interakce.push_back(interakce);
}

void Hrdina::vypisInterakce() {
    for (unsigned int i=0; i<m_interakce.size(); i++){
        std::cout << "(" << i << ")" << m_interakce.at(i)->getPopis() << std::endl;
    }
}

int Hrdina::ziskejRozhodnuti() {
    unsigned int rozhodnuti = 0;
    std::cout << "Zadej cislo rozhodnuti, ktere chces provet: ";
    std::cin >> rozhodnuti;

    if (rozhodnuti<m_interakce.size()){
        return rozhodnuti;
    }else{
        return ziskejRozhodnuti();
    }
}

