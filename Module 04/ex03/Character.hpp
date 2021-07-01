/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:00:05 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/01 13:56:14 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class	Character: public ICharacter
{
	std::string		_name;
	AMateria*		_inv[4];

	public:
		Character(void);
		Character(std::string const & name);
		Character(Character const & instance);
		~Character(void);

		Character &		operator=(Character const & instance);

		std::string const &		getName(void) const;
		void					equip(AMateria * m);
		void					unequip(int idx);
		void					use(int idx, ICharacter & target);
};

#endif