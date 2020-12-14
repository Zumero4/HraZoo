//
// Created by Dave on 13.12.2020.
//
#include <iostream>
#ifndef HRAZOO_HRDINA_H
#define HRAZOO_HRDINA_H


class Hrdina {

    std::string m_jmeno;
    int m_zivoty;
    int m_sila;
    std::string m_rasa;

    Hrdina(std::string jmeno,int zivoty, int sila, std::string rasa);

public:

    static Hrdina*  createHrdina(std::string jmeno, std::string rasa);

    void printInfo();
   /* int getZivoty();
    int getSila();*/
    void uberZivoty(int oKolik);



    ~Hrdina();


};
#endif //HRAZOO_HRDINA_H
