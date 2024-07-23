#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap naruto("Naruto");
	ScavTrap sasuke("Sasuke");
	FragTrap itachi("Itachi");

	std::cout << std::endl;
	while(naruto.get_energy() > 0)
	{
		if (itachi.get_hit() > 0)
		{
			naruto.attack("Itachi");
			itachi.takeDamage(naruto.get_dmg());
		}
		else if (sasuke.get_hit() > 0)
		{
			naruto.attack("Sasuke");
			sasuke.takeDamage(naruto.get_dmg());
		}
		else
			naruto.beRepaired(1);
	}
	std::cout << "\nNaruto has " << naruto.get_hit() << " HP" << std::endl;
	std::cout << "Sasuke has " << sasuke.get_hit() << " HP" << std::endl;
	std::cout << "Itachi has " << itachi.get_hit() << " HP\n" << std::endl;
	naruto.attack("moi");
	naruto.beRepaired(1);
	sasuke.guardGate();
	naruto.highFivesGuys();
	std::cout << std::endl;

}
