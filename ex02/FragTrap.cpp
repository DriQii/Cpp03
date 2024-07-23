#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(100, 100, 30)
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap " << name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	*this = copy;
	std::cout << "FragTrap " << this->get_name() << " copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->get_name() << " destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	ClapTrap::operator=(rhs);
	return(*this);
}

void FragTrap::attack(const std::string& target)
{
	if (this->get_energy() > 0)
	{
		std::cout << "FragTrap " << this->get_name() << " attack " << target << ", causing "
		<< this->get_dmg() << " points of damage !" << std::endl;
		this->set_energy(this->get_energy() - 1);
	}
	else
	{
		std::cout << "FragTrap " << this->get_name() << " has no energy left to attack!" << std::endl;
	}
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->get_name() << " calls for a high five!" << std::endl;
}
