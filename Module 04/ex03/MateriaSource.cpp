/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 20:00:21 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/01 12:45:42 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++) {
		this->_sources[i] = NULL;
	}
	return ;
}

MateriaSource::MateriaSource(MateriaSource const & instance)
{
	for (int i = 0; i < 4; i++) {
		delete this->_sources[i];
	}
	for (int i = 0; i < 4; i++) {
		if (instance._sources[i] != NULL)
			this->_sources[i] = instance._sources[i];
	}
	return ;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++) {
		delete this->_sources[i];
	}
	return ;
}

MateriaSource&		MateriaSource::operator=(MateriaSource const & instance)
{
	for (int i = 0; i < 4; i++) {
		delete this->_sources[i];
	}
	for (int i = 0; i < 4; i++) {
		if (instance._sources[i] != NULL)
			this->_sources[i] = instance._sources[i];
		else
			this->_sources[i] = NULL;
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria * materia)
{
	int i;

	if (!materia)
		return ;

	for (i = 0; i < 4 && this->_sources[i] != NULL; i++) ;

	if (i < 4)
		this->_sources[i] = materia;
	return ;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++) {
		if (this->_sources[i] != NULL && this->_sources[i]->getType() == type)
			return (this->_sources[i]->clone());
	}
	return (NULL);
}