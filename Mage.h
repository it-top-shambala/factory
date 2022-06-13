#ifndef FACTORY_MAGE_H
#define FACTORY_MAGE_H

#include "Hero.h"

class Mage : public Hero {
private:
    const int health = 100;
    const int damage = 10;

public:
    Mage(const string &name) : Hero(100, 10, name) {}
};


#endif //FACTORY_MAGE_H
