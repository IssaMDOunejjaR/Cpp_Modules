/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 19:59:14 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/01 13:50:13 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class	ICharacter;

class   AMateria
{
	protected:
		std::string     _type;
		unsigned int    _xp;

    public:
        AMateria(void);
        AMateria(std::string const & type);
        AMateria(AMateria const & instance);
        virtual ~AMateria(void);

        AMateria &  operator=(AMateria const & instance);

        std::string const &     getType(void) const;
        unsigned int            getXP(void) const;

        virtual AMateria *      clone(void) const = 0;
        virtual void            use(ICharacter & target);
};

#endif