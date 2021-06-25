/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 14:45:57 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/25 14:57:40 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class	FlagTrap: public ClapTrap
{
	public:
		FlagTrap(std::string name);
		FlagTrap(FlagTrap & instance);
		~FlagTrap(void);

		FlagTrap &	operator=(FlagTrap const & instance);

		void	highFivesGuys(void);
};

#endif