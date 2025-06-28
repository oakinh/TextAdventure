#include "living_entity.h"

class Player : public LivingEntity {
private:
    float reputation;

public:
    Player(
        std::string playerName, 
        float playerHealth, 
        float playerAttack, 
        float playerDefense, 
        float playerMagicDefense, 
        float playerReputation,
        float playerAccuracy,
        float playerEvasion
    )
        : LivingEntity(
            playerName, 
            playerHealth, 
            playerAttack, 
            playerDefense, 
            playerMagicDefense,
            playerAccuracy,
            playerEvasion
        ),
        reputation(playerReputation)
    {}

};