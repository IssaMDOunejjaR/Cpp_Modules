/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:12:24 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/03 19:59:30 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class	ShrubberyCreationForm: public AForm
{
	ShrubberyCreationForm(void);

	std::string		target;

	public:
		ShrubberyCreationForm(std::string const & target);
		ShrubberyCreationForm(ShrubberyCreationForm const & instance);
		~ShrubberyCreationForm(void);
		
		ShrubberyCreationForm&		operator=(ShrubberyCreationForm const & instance);

		void	execute(Bureaucrat const & instance) const;
};

#endif