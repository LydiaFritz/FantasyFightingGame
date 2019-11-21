#ifndef WARRIOR_HWarrior
#define WARRIOR_H

#include <string>
#include "Character.h"

using namespace std;

class Warrior: public Character {
private:
	int strength;
public:
	Warrior(string n) : Character(n) { strength = 0; }
	Warrior(string n, int str) : Character(n) { strength = str; }
	
	int getStrength()const { return strength; }
	void setStrength(int str) { strength = str; }

};

#endif
