/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 09:11:39 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/03 15:28:39 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	AForm
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
		AForm(void);
		AForm(std::string const & name, int gradeSign, int gardeExecute);
		AForm(AForm const & instance);
		~AForm(void);

		AForm&	operator=(AForm const & instance);

		std::string		getName(void) const;
		bool			getSigned(void) const;
		int				getGradeSign(void) const;
		int				getGradeExecute(void) const;
		void			beSigned(Bureaucrat & instance);

		virtual void			execute(Bureaucrat const & executor) const = 0;
};

std::ostream&	operator<<(std::ostream & output, AForm const & instance);

#endif