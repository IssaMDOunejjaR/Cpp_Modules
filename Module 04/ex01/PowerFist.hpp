/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:12:21 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/01 15:46:43 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include "AWeapon.hpp"

class	PowerFist: public AWeapon
{
	public:
		PowerFist(void);
		PowerFist(PowerFist & instance);
		virtual ~PowerFist(void);

		PowerFist &		operator=(PowerFist const & instance);

		void	attack(void) const;
};

#endif