/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:18:12 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/28 10:22:23 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class	Enemy
{
	protected:
		int				hp;
		std::string		type;

	public:
		Enemy(void);
		Enemy(int hp, std::string const & type);
		Enemy(Enemy & instance);
		virtual ~Enemy(void);

		Enemy &		operator=(Enemy const & instance);

		std::string		getType(void) const;
		int				getHP(void) const;
		virtual void	takeDamage(int amount);
};

#endif