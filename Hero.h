#ifndef FACTORY_HERO_H
#define FACTORY_HERO_H

#include <string>
#include <utility>

using namespace std;

class Hero {
protected:
    int _health;
    int _damage;
    string _name;

    Hero(int health, int damage, string name) : _health(health),
                                                _damage(damage),
                                                _name(std::move(name)) {}

public:
    void Attack(Hero* enemy) {
        enemy->_health = enemy->_health - this->_damage;
    }

    string GetName() {
        return _name;
    }

    int GetHealth() {
        return _health;
    }
};


#endif //FACTORY_HERO_H
