/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Worker.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:20:29 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/02 10:28:48 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Worker.hpp"

Worker::Worker(void)
{
	return ;
}

Worker::Worker(std::string name)
{
	this->name = name;
	std::cout << "Hi, i am a worker and my name is " << this->getName() << std::endl;
	return ;
}

Worker::Worker(Worker const & instance)
{
	*this = instance;
	return ;
}

Worker::~Worker(void)
{
	std::cout << this->getName() << " died working ..." << std::endl;
	return ;
}

Worker&		Worker::operator=(Worker const & instance)
{
	this->name = instance.name;
	return (*this);
}

void	Worker::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl; 
	return ;
}