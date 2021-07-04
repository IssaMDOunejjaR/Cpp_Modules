/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:13:07 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/04 10:50:37 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

class	PresidentialPardonForm: public Form
{
	PresidentialPardonForm(void);

	std::string	_target;

	public:
		PresidentialPardonForm(std::string const & target);
		PresidentialPardonForm(PresidentialPardonForm const & instance);
		~PresidentialPardonForm(void);

		PresidentialPardonForm&		operator=(PresidentialPardonForm const & instance);

		std::string		getTarget(void) const;
		void			execute(Bureaucrat const & instance) const;
};

#endif