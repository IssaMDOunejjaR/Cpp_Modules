/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 15:01:14 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/25 18:00:28 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap: virtual public FragTrap, virtual public ScavTrap
{
	std::string		name;
	// int				hitPoints;
	// int				energyPoints;
	// int				attackDamage;

	public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap & instance);
		~DiamondTrap(void);

		DiamondTrap &	operator=(DiamondTrap const & instance);

		void	whoAmI(void);
};

#endif