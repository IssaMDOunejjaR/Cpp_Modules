/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:02:17 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/28 10:10:52 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include "AWeapon.hpp"

class	PlasmaRifle: public AWeapon
{
	public:
		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle & instance);
		~PlasmaRifle(void);

		PlasmaRifle &	operator=(PlasmaRifle const & instance);

		void	attack(void) const;
};

#endif