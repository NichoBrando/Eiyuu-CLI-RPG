#include "helpers.hpp"
#include <iostream>
#include <string>

using namespace std;
class Character{
    private:
        int maxHP, currentHP;
        string name;
    
    public:
        void setInitialHP(int HP);
        void setName(string charName);
        int getHP();
        int getFullHP();
        void showCharacterStatusBar();
        void receiveDamage(int dmg);
        bool isDeath();
        string getName();
        int dealDamage(int dmg);
};