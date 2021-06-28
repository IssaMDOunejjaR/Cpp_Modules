/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:04:08 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/28 19:10:17 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class	TacticalMarine: public ISpaceMarine
{
	public:
		TacticalMarine(void);
		TacticalMarine(TacticalMarine & instance);
		~TacticalMarine(void);

		TacticalMarine &	operator=(TacticalMarine const & instance);

		ISpaceMarine *	clone(void) const;
		void			battleCry(void) const;
		void			rangedAttack(void) const;
		void			meleeAttack(void) const;
};

#endif