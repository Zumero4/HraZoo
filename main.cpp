#include <iostream>
#include <vector>
#include "Hrdina.h"
#include "Lobby.h"
#include "Jeskyne.h"


int main() {

   /* Lobby* p = new Lobby();
    p->print();*/

   std::vector<Mistnost*>mistnosti;
   mistnosti.push_back(new Lobby("vlk"));
   mistnosti.push_back(new Lobby(" "));
   mistnosti.push_back(new Jeskyne("drak"));

   for(auto mistnost:mistnosti){
       mistnost->print();
   }

    Hrdina* david = Hrdina::createHrdina("David","elf");
    david->printInfo();





    return 0;

}