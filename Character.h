#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <vector>
#include "Asset.h"

using namespace std;

class Character {
private:
	string name;
	int health;
	int coins;
	vector<Asset*> weapons;
public:
	Character(string n = "") {
		name = n;
		coins = health = 0;
	}

	void setName(string n) { name = n; }
	string getName()const { return name; }

	void setHealth(int h) { health = h; }
	int getHealth()const { return health; }

	int checkBalance()const { return coins; }
	void depositCoins(int c) { coins += c; }
	void spendCoins(int c) { coins -= c; }

	void addWeapon(Asset* weapon) { weapons.push_back(weapon); }
	Asset* selectWeapon(int index) { return weapons[index]; }

};

#endif
