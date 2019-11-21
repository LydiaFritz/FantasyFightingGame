#ifndef WIZARD_H
#define WIZARD_H

#include "Character.h"

class Wizard : public Character {
private:
	int level;
public:
	Wizard(string n) : Character(n) { level = 0; }
	Wizard(string n, int lev) : Character(n) { level = lev; }

	void setLevel(int lev) { level = lev; }
	int getLevel()const { return level; }
};

#endif
