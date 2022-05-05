#include "HumanB.hpp"

HumanB::HumanB(string name) {
	this->name = name;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

void HumanB::attack() {
	std::cout << name + " attacks with their " + weapon->getType() << std::endl;
}
