/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:29:01 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/04 11:43:55 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern
{
	public:
		Intern(void);
		Intern(Intern const & instance);
		~Intern(void);

		Intern&		operator=(Intern const & instance);

		Form*	makeForm(std::string const & formName, std::string const & target) const;
};

#endif