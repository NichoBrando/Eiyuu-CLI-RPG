#include <iostream>
using namespace std;

typedef struct{
  string habilityName;
  int cost;
  int damage;	
} SkillList [4];
	
class People{	
  public:
  	
	int receiveDamage(int damage){
	  this->health -= this->calculateDamage(damage);   
	}
	
	float calculateDamage(int damage){
	  return damage * (1 - (this->defense - 0.05));
	}
	
  protected:
  	string name;
  	int health, maxHealth, speed;
    float defense;

};

class Warrior : People{
  public:
  	
	Warrior(){
	  this->health = 500;
	  this->maxHealth = 500;
	  this->stamina = 200;
	  this->maxStamina = 200;
	  this->speed = 2;
	  this->defense = 0.65f; 
  	  this->skills[0].habilityName = "Basic Attack";
  	  this->skills[0].cost = 0;
  	  this->skills[0].damage = 20;
  	  this->skills[1].habilityName = "Brave Dash";
  	  this->skills[1].cost = 25;
  	  this->skills[1].damage = 80;
  	  this->skills[2].habilityName = "Hero\'s Legendary Spear";
  	  this->skills[2].cost = 50;
  	  this->skills[2].damage = 140;
  	  this->skills[3].habilityName = "Divine Blessing: \'Awaken\'";
  	  this->skills[3].cost = 150;
  	  this->skills[3].damage = 300;
	}
	
  	int skillList(){
  	  int i, choose;
  	  bool canUse;
  	  cout << "Skill List:\n";
  	  cout << "Current Health: " << this->health << " | " << this->maxHealth << endl;
  	  cout << "Current Stamina: " << this->stamina << " | " << this->maxStamina << endl;
  	  cout << "Skills\n";
  	  for(i = 0 ; i < 4 ; i++){
  	    cout << i + 1 << " " << this->skills[i].habilityName << "| Stamina: " << this->skills[i].cost << "| damage:" << this->skills[i].damage << endl; 	
	  }
	  cout << "5: recover stamina";
	  cout << "Choose your skill:";
	  cin >> choose;
	  choose--;
	  if(choose < 0 || choose > 4){
	  	cout << "Choose your skill again:";
	    cin >> choose;
	  }
	  if(this->skills[choose].cost <= this->stamina){
	  	cout << "You don\'t have stamina to use this skill" << endl;
		canUse = false;
	  }
	  while(!(canUse)){
	  	cout << "Choose your skill again:";
	    cin >> choose;
	  }
	  if(choose == 4){
	  	this->updateStamina(20);
	  	cout << this->name << "";
	  	return 0;
	  }
	  this->updateStamina(-1);
	  return this->skills[choose].damage;
	}
	
  private:
  	SkillList skills;
  	int stamina, maxStamina;
  	void updateStamina(int quantity){
  	  cout << quantity;
	}
};

int main(){
  return 0;  
}
