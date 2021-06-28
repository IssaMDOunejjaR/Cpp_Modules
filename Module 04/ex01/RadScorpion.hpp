/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:48:45 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/28 10:50:45 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include "Enemy.hpp"

class	RadScorpion: public Enemy
{
	public:
		RadScorpion(void);
		RadScorpion(RadScorpion & instance);
		~RadScorpion(void);

		RadScorpion &	operator=(RadScorpion const & instance);
};

#endif