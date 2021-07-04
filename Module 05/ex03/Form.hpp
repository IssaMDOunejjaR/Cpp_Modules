/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 09:11:39 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/04 10:45:48 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	Form(void);

	std::string const	_name;
	bool				_isSigned;
	int	const			_gradeSign;
	int	const			_gradeExecute;

	public:
		class	GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("FormException: Grade is too high!");
				}
		};

		class	GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("FormException: Grade is too low!");
				}
		};

		class	UnsignedException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Form: The form is unsigned!");
				}
		};

		Form(std::string const & name, int gradeSign, int gardeExecute);
		Form(Form const & instance);
		~Form(void);

		Form&	operator=(Form const & instance);

		std::string		getName(void) const;
		bool			getSigned(void) const;
		int				getGradeSign(void) const;
		int				getGradeExecute(void) const;
		void			beSigned(Bureaucrat & instance);

		virtual void	execute(Bureaucrat const & executor) const = 0;
};

std::ostream&	operator<<(std::ostream & output, Form const & instance);

#endif