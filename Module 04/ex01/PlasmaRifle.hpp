/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:02:17 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/01 15:46:55 by iounejja         ###   ########.fr       */
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
		virtual ~PlasmaRifle(void);

		PlasmaRifle &	operator=(PlasmaRifle const & instance);

		void	attack(void) const;
};

#endif