#include <iostream>
//#include <string>

class Character{
    private:
        int maxHP, currentHP;
        //string name;
    
    public:
        Character(int hp /*, string charName */);
        int getHP();
        void receiveDamage(int dmg);
        bool isDeath();
        //string getName();
};