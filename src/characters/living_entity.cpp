#include "characters/living_entity.h"
#include <random>

void LivingEntity::takeDamage(int damage) {
    this->health -= damage;
}

bool LivingEntity::basicAttack(LivingEntity& target) {
    // Accuracy achieved is a 1-100 scale, < 10 is a miss
    float hitChance = this->accuracy - target.evasion;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, 100);

    if (hitChance > distr(gen)) return false;

    int damage = this->attack - target.defense;
    target.takeDamage(damage);
    return true;
}

