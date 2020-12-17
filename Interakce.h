//
// Created by Dave on 14.12.2020.
//

#ifndef HRAZOO_INTERAKCE_H
#define HRAZOO_INTERAKCE_H
#include <iostream>
#include "Hrdina.h"
#include "Protivnik.h"
#include "Mistnost.h"
#include "Lobby.h"

class Interakce {
    std::string m_popis;
public:
    Interakce(std::string popis);
    virtual void interaguj(Hrdina* kdo, Protivnik* skym) = 0;
    std::string getPopis();

private:
    void vypisPopisAkce();



};


#endif //HRAZOO_INTERAKCE_H
