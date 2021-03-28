#include "../includes/character.hpp"
#include <iostream>
#include <string>

using namespace std;

Character::Character(int HP /*, string charName */){
    currentHP = HP;
    maxHP = HP;
    //name = name;
}

int Character::getHP(){
    return currentHP;  
}

void Character::receiveDamage(int dmg){
    currentHP -= dmg;
    if(currentHP < 0) currentHP = 0;
}

bool Character::isDeath(){
    return currentHP == 0;
}

/* string Character::getName(){
    return name;
} */