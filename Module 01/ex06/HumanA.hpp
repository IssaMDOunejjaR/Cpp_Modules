/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 12:51:14 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/07 16:46:07 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	public:
		std::string		name;
		Weapon&			_weapon;
		
		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);
		
		void	attack(void) const;
};

#endif