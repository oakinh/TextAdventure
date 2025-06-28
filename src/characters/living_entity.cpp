#include <iostream>
#include <string>

class LivingEntity {
private:
    std::string name;
    float health;
    float attack;
    float defense;
    float magicDefense;

public:
    LivingEntity(std::string entityName, float entityHealth, float entityAttack, float entityDefense, float entityMagicDefense)
        : name(entityName), health(entityHealth), attack(entityAttack), defense(entityDefense), magicDefense(entityMagicDefense) {}

    ~LivingEntity() {
        std::cout << "Character " << name << "is destroyed.\n";
    }
};