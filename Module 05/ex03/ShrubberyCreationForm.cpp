/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:12:16 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/04 12:18:03 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target): Form("shrubbery creation", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & instance): Form(instance), _target(instance.getTarget())
{
	*this = instance;
	return ;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & instance)
{
	if (this == &instance)
		return (*this);
	return (*this);
}

std::string		ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & instance) const
{
	if (instance.getGrade() > this->getGradeExecute())
		throw Form::GradeTooLowException();
	else if (!this->getSigned())
		throw Form::UnsignedException();

	std::ofstream	file(this->getTarget() + "_shrubbery");

	for (int i = 0; i < 5; i++) {
		file << "      .*.              .*.              .*.              .*.              .*.      " << std::endl;
		file << "      ***              ***              ***              ***              ***      " << std::endl;
		file << "     *****            *****            *****            *****            *****     " << std::endl;
		file << "    *******          *******          *******          *******          *******    " << std::endl;
		file << "   *********        *********        *********        *********        *********   " << std::endl;
		file << "  ***********      ***********      ***********      ***********      ***********  " << std::endl;
		file << " *************    *************    *************    *************    ************* " << std::endl;
		file << "***************  ***************  ***************  ***************  ***************" << std::endl;
		file << "       ||               ||               ||               ||               ||      " << std::endl;
		file << "       ||               ||               ||               ||               ||      " << std::endl;
		file << "       --               --               --               --               --      " << std::endl;
	}
	
	file.close();
	return ;
}