/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:12:42 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/04 10:40:13 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"

class	RobotomyRequestForm: public Form
{
	RobotomyRequestForm(void);

	std::string	_target;

	public:
		RobotomyRequestForm(std::string const & target);
		RobotomyRequestForm(RobotomyRequestForm const & instance);
		~RobotomyRequestForm(void);

		RobotomyRequestForm&	operator=(RobotomyRequestForm const & instance);

		std::string		getTarget(void) const;
		void			execute(Bureaucrat const & instance) const;
};

#endif