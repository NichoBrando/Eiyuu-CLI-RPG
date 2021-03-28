#include "../includes/enemy.hpp"
#include <iostream>
#include <string>

using namespace std;

Enemy::Enemy(int enemyAtk, int enemyDef, string enemyName, int HP){
    atk = enemyAtk;
    def = enemyDef;
    setInitialHP(HP);
    setName(enemyName);
}

int Enemy::dealNormalAttack(){
    return dealDamage(atk);
};

int Enemy::receiveAttack(int dmg){
    return dmg;
};