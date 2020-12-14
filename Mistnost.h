//
// Created by Dave on 14.12.2020.
//

#ifndef HRAZOO_MISTNOST_H
#define HRAZOO_MISTNOST_H
#include <iostream>
#include "Protivnik.h"

//abstraktni trida

class Mistnost {
protected:
    Protivnik* m_protivnik;
public:
    Mistnost(std::string rasa);
    virtual void print() = 0;
    virtual ~Mistnost();
};


#endif //HRAZOO_MISTNOST_H
