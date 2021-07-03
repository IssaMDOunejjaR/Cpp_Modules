/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 13:36:04 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/03 15:49:53 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "AForm.hpp"

class AForm;

class	Bureaucrat
{
	class	GradeTooHighException: public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade is to high!");
			} 
	};

	class	GradeTooLowException: public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("Grade is to low!");
			}
	};

	std::string	const	_name;
	int					_grade;

	public:
		Bureaucrat(void);
		Bureaucrat(std::string const & name, int grade);
		Bureaucrat(Bureaucrat const & instance);
		~Bureaucrat(void);

		Bureaucrat&		operator=(Bureaucrat const & instance);

		std::string const	getName(void) const;
		int					getGrade(void) const;
		void				gradeIncrement(void);
		void				gradeDecrement(void);
		void				signForm(AForm const & instance);
};

std::ostream&	operator<<(std::ostream & output, Bureaucrat const & instance);

#endif