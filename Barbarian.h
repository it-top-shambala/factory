#ifndef FACTORY_BARBARIAN_H
#define FACTORY_BARBARIAN_H

#include "Hero.h"

class Barbarian : public Hero {
private:
    static int health;
    static int damage;

public:
    Barbarian(const string &name) : Hero(health, damage, name) {}
};

int Barbarian::health = 110;
int Barbarian::damage = 20;

#endif //FACTORY_BARBARIAN_H
