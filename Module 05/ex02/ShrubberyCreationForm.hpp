/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:12:24 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/04 15:34:57 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "Form.hpp"

class	ShrubberyCreationForm: public Form
{
	ShrubberyCreationForm(void);

	std::string		_target;

	public:
		ShrubberyCreationForm(std::string const & target);
		ShrubberyCreationForm(ShrubberyCreationForm const & instance);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm&		operator=(ShrubberyCreationForm const & instance);

		std::string		getTarget(void) const;
		void			execute(Bureaucrat const & instance) const;
};

#endif