#pragma once

#include <string>

class LivingEntity {
private:
    std::string name;
    float health;
    float attack;
    float defense;
    float magicDefense;

public:
    LivingEntity(
        std::string characterName, 
        float characterHealth, 
        float characterAttack, 
        float characterDefense,
        float characterMagicDefense
    );
    ~LivingEntity();
};