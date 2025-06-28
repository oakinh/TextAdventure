#include "living_entity.h"

class Player : public LivingEntity {
private:
    float reputation;

public:
    Player(std::string playerName, float playerHealth, float playerAttack, float playerDefense, float playerMagicDefense, float playerReputation)
        : LivingEntity(playerName, playerHealth, playerAttack, playerDefense, playerMagicDefense),
        reputation(playerReputation)
    {}

    bool basicAttack() {
        
    }
};