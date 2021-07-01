/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 19:59:52 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/01 12:08:12 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Cure: public AMateria
{
	public:
		Cure(void);
		Cure(Cure const & instance);
		~Cure(void);

		Cure &		operator=(Cure const & instance);

		AMateria *  clone(void) const;
        void        use(ICharacter & target);
};

#endif