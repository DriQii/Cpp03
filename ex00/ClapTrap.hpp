#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{

public:

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copy);
	~ClapTrap();

	ClapTrap &operator=(const ClapTrap &rhs);

	std::string		get_name();
	unsigned int	get_hit();
	unsigned int	get_energy();
	unsigned int	get_dmg();
	void			set_dmg(unsigned int dmg);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

private:

	std::string		_name;
	unsigned int	_hit;
	unsigned int	_energy;
	unsigned int	_dmg;

};

#endif
