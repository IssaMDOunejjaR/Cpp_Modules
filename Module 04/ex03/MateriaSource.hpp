/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:00:29 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/01 12:34:28 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class	MateriaSource: public IMateriaSource
{
	AMateria*	_sources[4];

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & instance);
		~MateriaSource(void);

		MateriaSource&	operator=(MateriaSource const & instance);

		void		learnMateria(AMateria * materia);
		AMateria*	createMateria(std::string const & type);
};

#endif