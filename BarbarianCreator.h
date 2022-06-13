#ifndef FACTORY_BARBARIANCREATOR_H
#define FACTORY_BARBARIANCREATOR_H

#include "HeroesCreator.h"
#include "Barbarian.h"

class BarbarianCreator : public HeroesCreator {
public:
    Hero* Create(string name) override {
        return new Barbarian(name);
    }
};


#endif //FACTORY_BARBARIANCREATOR_H
