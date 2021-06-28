/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:32:27 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/28 10:36:05 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp"

class	SuperMutant: public Enemy
{
	public:
		SuperMutant(void);
		SuperMutant(SuperMutant & instance);
		~SuperMutant(void);

		SuperMutant &	operator=(SuperMutant const & instance);

		void	takeDamage(int amount);
};

#endif