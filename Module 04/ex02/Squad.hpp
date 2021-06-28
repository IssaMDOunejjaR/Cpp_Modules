/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:44:56 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/28 16:53:51 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"

class	Squad: public ISquad
{
	typedef struct	s_units
	{
		ISpaceMarine 	*unit;
		struct	s_units	*next;
	}				t_units;
	t_units		*units;
	int			numberOfUnits;

	public:
		Squad(void);
		Squad(Squad & instance);
		~Squad(void);

		Squad &		operator=(Squad const & instance);

		int				getCount(void) const;
		ISpaceMarine *	getUnit(int index) const;
		int				push(ISpaceMarine * instance);
};

#endif