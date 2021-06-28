/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:56:06 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/28 12:08:36 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class	Character
{
	std::string		name;
	int				ap;
	AWeapon	*		weapon;

	public:
		Character(void);
		Character(std::string const & name);
		Character(Character & instance);
		~Character(void);

		Character &		operator=(Character const & instance);

		void				recoverAP(void);
		void				equip(AWeapon * weapon);
		void				attack(Enemy * enemy);
		std::string	const	getName(void) const;
		int					getAP(void) const;
		AWeapon *			getWeapon(void) const;
};

std::ostream &		operator<<(std::ostream & output, Character const & instance);

#endif