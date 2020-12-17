#include <iostream>
#include <vector>
#include "Hrdina.h"
#include "Lobby.h"
#include "Jeskyne.h"
#include "Interakce.h"
#include "Bojuj.h"
#include "Mistnost.h"
#include "Predmet.h"
#include "Protivnik.h"
#include "Utec.h"

int main() {

    Hrdina* david = Hrdina::createHrdina("David","elf");
    david->printInfo();

   /* Lobby* p = new Lobby();
    p->print();*/

   std::vector<Mistnost*>mistnosti;
   mistnosti.push_back(new Lobby("vlk"));
   mistnosti.push_back(new Lobby(" "));
   mistnosti.push_back(new Jeskyne("drak"));

   mistnosti.at(2)->print();


   for(auto mistnost:mistnosti){
       mistnost->print();
   }


   Protivnik* vlk = Protivnik::createProtivnik("vlk");
   Protivnik* medved = Protivnik::createProtivnik("medved");
   Protivnik* drak = Protivnik::createProtivnik("drak");

    david->naucInterakci(new Utec("Utec! -50 % sance na utek"));

    david->naucInterakci(new Bojuj("souboj"));
    david->interaguj(vlk);
    david->interaguj(medved);
    david->interaguj(drak);




    return 0;

}