#include "FragTrap.hpp"

FragTrap::FragTrap() {
	cout << "FragTrap default constructor called" << endl;
	this->name = "default";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	this->fragHitPoints = 100;
	this->fragAttackDamage = 30;
}

FragTrap::~FragTrap() {
	cout << "FragTrap destructor called" << endl;
}

FragTrap::FragTrap(string name) : ClapTrap(name) {
	cout << "FragTrap name parameter constructor called" << endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	this->fragHitPoints = 100;
	this->fragAttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &fragTrap) {
	cout << "FragTrap copy constructor called" << endl;
	*this = fragTrap;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap) {
	if (this != &fragTrap) {
		this->name = fragTrap.name;
		this->hitPoints = fragTrap.hitPoints;
		this->fragHitPoints = fragTrap.fragHitPoints;
		this->energyPoints = fragTrap.energyPoints;
		this->attackDamage = fragTrap.attackDamage;
		this->fragAttackDamage = fragTrap.fragAttackDamage;
	}
	return *this;
}

void FragTrap::highFivesGuys() {
	cout << this->name << " give me a five!" << endl;
}

int FragTrap::getFragHitPoints() {
	return this->fragHitPoints;
}

int FragTrap::getFragAttackDamage() {
	return this->fragAttackDamage;
}