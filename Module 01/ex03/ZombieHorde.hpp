/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 15:57:41 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/09 10:48:26 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include "Zombie.hpp"

class	ZombieHorde
{
	Zombie*		_zombies;
	int	const	_numberOfZombies;

	public:
		ZombieHorde(int numberOfZombies);
		~ZombieHorde(void);

		void	annouce(void) const;
};

#endif