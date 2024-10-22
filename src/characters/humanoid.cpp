#include <iostream>
#include <string>

class Humanoid {
private:
    std::string name;
    int health;
    int attack;
    int defense;

public:
    Humanoid(std::string characterName, int characterHealth, int characterAttack, int characterDefense) {
        name = characterName;
        health = characterHealth;
        attack = characterAttack;
        defense = characterDefense;
    }

    ~Humanoid() {
        std::cout << "Character " << name << "is destroyed.\n";
    }
};