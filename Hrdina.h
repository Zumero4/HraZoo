//
// Created by Dave on 13.12.2020.
//
#include <iostream>
#ifndef HRAZOO_HRDINA_H
#define HRAZOO_HRDINA_H
#include <vector>
#include "Predmet.h"
#include "Mistnost.h"
#include "Protivnik.h"
class Interakce;

class Hrdina {
    std::vector <Predmet*> m_predmety;
    std::vector <Interakce*> m_interakce;
    int m_pozice=0;
    std::string m_jmeno;
    int m_zivoty;
    int m_sila;
    std::string m_rasa;

    Hrdina(std::string jmeno,int zivoty, int sila, std::string rasa);

public:

    static Hrdina*  createHrdina(std::string jmeno, std::string rasa);

    std::string getJmeno();
    void printInfo();
    int getZivoty();
    int getSila();
    void uberZivoty(int oKolik);

    int getPozice();
    int jitDal();

    void interaguj(Protivnik* protivnik);
    void naucInterakci(Interakce* interakce);

    void seberPredmet(Predmet* predmet);
    Predmet* getPredmet(int index);
    void odeberPredmet(int index);

    ~Hrdina();

private:
    void vypisInterakce();
    int ziskejRozhodnuti();


};
#endif //HRAZOO_HRDINA_H
