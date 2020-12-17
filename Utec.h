//
// Created by Dave on 17.12.2020.
//

#ifndef HRAZOO_UTEC_H
#define HRAZOO_UTEC_H
#include "Interakce.h"

class Utec: public Interakce {
public:
    Utec(std::string popis);
    void interaguj(Hrdina* kdo, Protivnik* skym);

};


#endif //HRAZOO_UTEC_H
