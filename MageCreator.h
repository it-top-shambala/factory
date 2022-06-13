
#ifndef FACTORY_MAGECREATOR_H
#define FACTORY_MAGECREATOR_H

#include "HeroesCreator.h"
#include "Mage.h"

class MageCreator : public HeroesCreator {
public:
    Hero* Create(string name) override {
        return new Mage(name);
    }
};


#endif //FACTORY_MAGECREATOR_H
