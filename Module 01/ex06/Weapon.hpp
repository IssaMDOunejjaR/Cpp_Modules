/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 12:50:40 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/07 17:11:00 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	std::string		_type;

	public:
		Weapon(std::string type);
		~Weapon(void);

		void				setType(std::string type);
		std::string	const&	getType(void) const;
};

#endif