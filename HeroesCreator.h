#ifndef FACTORY_HEROESCREATOR_H
#define FACTORY_HEROESCREATOR_H

#include "Hero.h"

class HeroesCreator {
protected:
    HeroesCreator() {}

public:
    virtual Hero* Create(string name) = 0;
};


#endif //FACTORY_HEROESCREATOR_H
