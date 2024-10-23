#pragma once

#include <string>
#include <iostream>

class LivingEntity {
private:
    std::string name;
    float health;
    float attack;
    float defense;
    float magicdefense;

public:
    LivingEntity(std::string characterName, float characterHealth, float characterAttack, float characterDefense);
    ~LivingEntity();
};