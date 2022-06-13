#include <iostream>

#include "Mage.h"
#include "Barbarian.h"

#include "MageCreator.h"
#include "BarbarianCreator.h"

using namespace std;

void PrintHeroInfo(Hero* hero);
Hero* Creator(HeroesCreator* creator);

int main() {

    Hero* player;
    Hero* enemy;

    char select;
    cout << "Enter your hero: " << endl;
    cout << "1. Mage " << endl;
    cout << "2. Barbarian " << endl;
    cin >> select;

    switch (select) {
        case '1':
            player = Creator(new MageCreator());
            enemy = Creator(new BarbarianCreator());
            break;
        case '2':
            player = Creator(new BarbarianCreator());
            enemy = Creator(new MageCreator());
            break;
        default:
            player = nullptr;
            enemy = nullptr;
            break;
    }

    PrintHeroInfo(player);
    PrintHeroInfo(enemy);

    player->Attack(enemy);
    enemy->Attack(player);

    PrintHeroInfo(player);
    PrintHeroInfo(enemy);

    return 0;
}

void PrintHeroInfo(Hero* hero) {
    cout << "--- --- ---" << endl;
    cout << "Name: " << hero->GetName() << endl;
    cout << "Health: " << hero->GetHealth() << endl;
    cout << "--- --- ---" << endl;
}

Hero* Creator(HeroesCreator* creator) {
    string name;
    cout << "Enter name of hero: ";
    cin >> name;
    return creator->Create(name);
}