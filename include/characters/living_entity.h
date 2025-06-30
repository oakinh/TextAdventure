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
        const std::string& characterName, 
        float characterHealth, 
        float characterAttack, 
        float characterDefense,
        float characterMagicDefense,
        float characterAccuracy,
        float characterEvasion
    );

    bool basicAttack(LivingEntity& target);
    void takeDamage(float damage);
};