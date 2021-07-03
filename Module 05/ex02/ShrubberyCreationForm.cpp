/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:12:16 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/03 19:59:06 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm()
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target): AForm(target, 145, 137)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & instance): AForm(this->getName(), 145, 137)
{
	*this = instance;
	return ;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & instance)
{
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & instance) const
{
	std::ofstream	file(this->getName() + "_shrubbery");
	
	file << "      .*.      " << std::endl;
	file << "      ***      " << std::endl;
	file << "     *****     " << std::endl;
	file << "    *******    " << std::endl;
	file << "   *********   " << std::endl;
	file << "  ***********  " << std::endl;
	file << " ************* " << std::endl;
	file << "***************" << std::endl;
	file << "       ||      " << std::endl;
	file << "       ||      " << std::endl;
	file << "       --      " << std::endl;
	
	return ;
}