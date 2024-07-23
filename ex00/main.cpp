#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Naruto("Naruto");
	ClapTrap Sasuke("Sasuke");
	ClapTrap clap3(Naruto);
	ClapTrap clap4;

	clap4 = Sasuke;

	while (clap3.get_energy() > 0)
	{
		clap3.attack(clap4.get_name());
		if (clap3.get_energy() == 5)
			clap3.set_dmg(2);
		clap4.takeDamage(clap3.get_dmg());
		std::cout << clap4.get_name() << " has " << clap4.get_hit() << " hit point left !\n" << std::endl;
	}

	while(clap4.get_hit() < 10)
		clap4.beRepaired(2);
	std::cout << clap4.get_name() << " has " << clap4.get_hit() << " hit point left !\n" << std::endl;
	clap3.attack(clap4.get_name());
	clap3.attack(clap4.get_name());

}
