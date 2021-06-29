/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 19:59:28 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/29 20:18:09 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class   Ice: public AMateria
{
    public:
        Ice(void);
        Ice(Ice const & instance);
        ~Ice(void);

        Ice &   operator=(Ice const & instance);

        AMateria *  clone(void) const;
        void        use(ICharater & target);
};

#endif