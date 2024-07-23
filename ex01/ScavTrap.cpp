#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(100, 50, 20)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	*this = copy;
	std::cout << "ScavTrap " << this->get_name() << " copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->get_name() << " destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	ClapTrap::operator=(rhs);
	return(*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->get_energy() > 0)
	{
		std::cout << "ScavTrap " << this->get_name() << " attack " << target << ", causing "
		<< this->get_dmg() << " points of damage !" << std::endl;
		this->set_energy(this->get_energy() - 1);
	}
	else
	{
		std::cout << "ScavTrap " << this->get_name() << " has no energy left to attack!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->get_name() << " is now in gate keeper mode" << std::endl;
}
