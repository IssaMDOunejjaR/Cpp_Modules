/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:11:03 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/28 19:12:52 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class	AssaultTerminator
{
	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator & instance);
		~AssaultTerminator(void);

		AssaultTerminator &		operator=(AssaultTerminator const & instance);

		ISpaceMarine *	clone(void) const;
		void			battleCry(void) const;
		void			rangedAttack(void) const;
		void			meleeAttack(void) const;
};

#endif