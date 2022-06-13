#ifndef FACTORY_MAGE_H
#define FACTORY_MAGE_H

#include "Hero.h"

class Mage : public Hero {
private:
    static int health;
    static int damage;

public:
    Mage(const string &name) : Hero(health, damage, name) {}
};

int Mage::health = 100;
int Mage::damage = 10;


#endif //FACTORY_MAGE_H
