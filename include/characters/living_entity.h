#pragma once

#include <string>

class LivingEntity {
private:
    std::string name;
    float health;
    float attack;
    float defense;
    float magicDefense;
    float accuracy;
    float evasion;

public:
    LivingEntity(
        std::string characterName, 
        float characterHealth, 
        float characterAttack, 
        float characterDefense,
        float characterMagicDefense,
        float characterAccuracy,
        float characterEvasion
    );
    ~LivingEntity();

    bool basicAttack(LivingEntity& target);
    void takeDamage(int damage);
};