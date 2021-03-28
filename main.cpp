#include <iostream>
#include "includes/character.hpp"

using namespace std;

int main()
{
    Character myChar(100);
    cout << "My HP : " << myChar.getHP();
    return 1;
}