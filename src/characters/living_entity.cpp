#include "characters/living_entity.h"
#include "util.h"

void LivingEntity::takeDamage(float damage) {
    this->health -= damage;
}

bool LivingEntity::basicAttack(LivingEntity& target) {
    float hitChance = this->accuracy - target.evasion;
    if (hitChance > generateRandom(1, 100)) return false;

    float damage = this->attack - target.defense;
    target.takeDamage(damage);
    return true;
}

