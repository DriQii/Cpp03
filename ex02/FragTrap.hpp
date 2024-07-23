#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{

public:

	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &copy);
	~FragTrap();

	FragTrap &operator=(const FragTrap &rhs);

	void	attack(const std::string& target);
	void	highFivesGuys(void);
	
};



#endif