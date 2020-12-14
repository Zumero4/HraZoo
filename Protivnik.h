//
// Created by Dave on 14.12.2020.
//

#ifndef HRAZOO_PROTIVNIK_H
#define HRAZOO_PROTIVNIK_H
#include <iostream>

class Protivnik {
    std::string m_rasa;
    int m_zivoty;
    int m_sila;

    Protivnik(std::string rasa, int zivoty, int sila);

public:

    static Protivnik* createProtivnik(std::string rasa);

    std::string getRasa();
    void printInfo();
    int getSila();
    int getZivoty();
    void uberZivoty(int oKolik);

};


#endif //HRAZOO_PROTIVNIK_H
