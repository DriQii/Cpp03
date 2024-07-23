#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hit(10), _energy(10), _dmg(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _dmg(0)
{
	std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(unsigned int hit, unsigned int energy, unsigned int dmg) : _hit(hit), _energy(energy), _dmg(dmg)
{
	std::cout << "ClapTrap constructor whithout name called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int hit, unsigned int energy, unsigned int dmg) : _name(name), _hit(hit), _energy(energy), _dmg(dmg)
{
	std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << "ClapTrap  " << this->_name << " copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap  " << this->_name << " destructor called" << std::endl;
}


ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	this->_dmg = rhs._dmg;
	this->_name = rhs._name;
	this->_energy = rhs._energy;
	this->_hit = rhs._hit;
	return(*this);
}

std::string		ClapTrap::get_name()
{
	return(this->_name);
}
unsigned int	ClapTrap::get_hit()
{
	return(this->_hit);
}
unsigned int	ClapTrap::get_energy()
{
	return(this->_energy);
}
unsigned int	ClapTrap::get_dmg()
{
	return(this->_dmg);
}

void	ClapTrap::set_dmg(unsigned int dmg)
{
	this->_dmg = dmg;
}

void	ClapTrap::set_energy(unsigned int energy)
{
	this->_energy = energy;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit >= amount)
		this->_hit -= amount;
	else
		this->_hit = 0;
	std::cout << this->_name << " take " << amount << " points of damage !" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energy > 0)
	{
		std::cout << "ClapTrap" << this->_name << " attack " << target << ", causing "
		<< this->_dmg << " points of damage !" << std::endl;
		this->_energy--;
	}
	else
	{
		std::cout << "ClapTrap" << this->_name << " has no energy left to attack!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0)
	{
		std::cout << this->_name << " repair " << amount << " hit points !" << std::endl;
		this->_energy--;
		this->_hit += amount;
	}
	else
	{
		std::cout << this->_name << " has no energy left to be repaired!" << std::endl;
	}
}
