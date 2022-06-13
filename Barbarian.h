#ifndef FACTORY_BARBARIAN_H
#define FACTORY_BARBARIAN_H

#include "Hero.h"

class Barbarian : public Hero {
private:
    const int health = 110;
    const int damage = 20;

public:
    Barbarian(const string &name) : Hero(110, 20, name) {}
};


#endif //FACTORY_BARBARIAN_H
