#include "character.hpp"
#include <iostream>
#include <string>

using namespace std;

class Enemy: public Character{
    private:
        int atk, def;
    
    public:
        Enemy(int enemyAtk, int enemyDef, string enemyName, int HP);
        int dealNormalAttack();
        int receiveAttack(int dmg);
};