//
// Created by Dave on 14.12.2020.
//

#ifndef HRAZOO_PREDMET_H
#define HRAZOO_PREDMET_H
#include <iostream>

struct Predmet {
    std::string jmeno;

    Predmet(){
        jmeno = "";
    }

    Predmet(std::string jmeno){
        this->jmeno = jmeno;
    }

};


#endif //HRAZOO_PREDMET_H
