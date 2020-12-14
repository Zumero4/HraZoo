//
// Created by Dave on 14.12.2020.
//

#ifndef HRAZOO_LOBBY_H
#define HRAZOO_LOBBY_H

#include "Mistnost.h"

class Lobby: public Mistnost {
public:
    Lobby(std::string rasa);
    void print();
    void getProtivnik();
};


#endif //HRAZOO_LOBBY_H
