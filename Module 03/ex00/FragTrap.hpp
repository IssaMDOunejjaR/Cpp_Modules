/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 18:24:38 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/12 19:26:39 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class FragTrap
{
	public:
		int			hitPoints;
		int			maxHintPoints;
		int			energyPoints;
		int			maxEnergyPoints;
		int			level;
		std::string	name;
		int			meleeAttackDamage;
		int			rangedAttackDamage;
		int			armorDamageReduction;
		
		FragTrap(std::string name);
		FragTrap(FragTrap & instance);
		~FragTrap(void);

		FragTrap &	operator=(FragTrap const & instance);

		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

std::ostream &	operator<<(std::ostream & output, FragTrap const & instance);

#endif