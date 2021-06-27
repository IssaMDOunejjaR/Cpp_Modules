/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:00:23 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/27 19:27:59 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class	AWeapon
{
	protected:
		std::string		name;
		int				apcost;
		int 			damage;

	public:
		AWeapon(void);
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon & instance);
		virtual ~AWeapon(void);

		AWeapon &	operator=(AWeapon const & instance);

		std::string	const &		getName(void) const;
		int						getAPCost(void) const;
		int						getDamage(void) const;
		
		virtual void	attack(void) const = 0;
};

#endif