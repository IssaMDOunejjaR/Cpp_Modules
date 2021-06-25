/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 09:15:26 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/25 16:14:58 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{
	protected:
		std::string		name;
		int				hitPoints;
		int				energyPoints;
		int				attackDamage;

	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap & instance);
		~ClapTrap(void);

		ClapTrap &	operator=(ClapTrap const & instance);

		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif