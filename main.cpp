#include <iostream>

#include "Mage.h"
#include "Barbarian.h"

using namespace std;

void PrintHeroInfo(Hero* hero);

int main() {

    Hero* player;
    Hero* enemy;

    char select;
    cout << "Enter your hero: " << endl;
    cout << "1. Mage " << endl;
    cout << "2. Barbarian " << endl;
    cin >> select;

    string name;
    cout << "Enter name of hero: ";
    cin >> name;

    switch (select) {
        case '1':
            player = new Mage(name);
            enemy = new Barbarian("enemy");
            break;
        case '2':
            player = new Barbarian(name);
            enemy = new Mage("enemy");
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
