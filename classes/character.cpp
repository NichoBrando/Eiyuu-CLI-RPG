#include "../includes/character.hpp"
#include <iostream>
#include <string>

using namespace std;

void Character::setInitialHP(int HP){
    maxHP = HP;
    currentHP = HP;
};

void Character::setName(string charName){
    name = charName;
};

int Character::getHP(){
    return currentHP;  
}

int Character::getFullHP(){
    return maxHP;  
}

void Character::receiveDamage(int dmg){
    currentHP -= dmg;
    if(currentHP < 0) currentHP = 0;
}

bool Character::isDeath(){
    return currentHP == 0;
}

string Character::getName(){
    return name;
}

void Character::showCharacterStatusBar(){
    cout << name << endl << currentHP << "/" << maxHP << endl;  
}

int Character::dealDamage(int dmg){
    if(isCritical()) return dmg * 2;
    return dmg;
}