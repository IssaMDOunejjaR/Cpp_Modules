/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 09:11:39 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/03 11:55:19 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	class	GradeTooHighException: public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade is too high!");
			}
	};

	class	GradeTooLowException: public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade is too low!");
			}
	};


	std::string const	_name;
	bool				_isSigned;
	int	const			_gradeSign;
	int	const			_gradeExecute;

	public:
		Form(void);
		Form(std::string const & name, int gradeSign, int gardeExecute);
		Form(Form const & instance);
		~Form(void);

		Form&	operator=(Form const & instance);

		std::string		getName(void) const;
		bool			getSigned(void) const;
		int				getGradeSign(void) const;
		int				getGradeExecute(void) const;

		void			beSigned(Bureaucrat & instance);
};

std::ostream&	operator<<(std::ostream & output, Form const & instance);

#endif