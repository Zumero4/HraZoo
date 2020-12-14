//
// Created by Dave on 14.12.2020.
//

#ifndef HRAZOO_BOJUJ_H
#define HRAZOO_BOJUJ_H
#include "Hrdina.h"
#include "Interakce.h"
#include "Protivnik.h"

class Bojuj:public Interakce{
public:
    Bojuj(std::string popis);
    void interaguj(Hrdina* kdo, Protivnik* skym);


};


#endif //HRAZOO_BOJUJ_H
