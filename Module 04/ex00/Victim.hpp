/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 13:03:27 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/27 18:51:45 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class	Victim
{
	protected:
		std::string		name;

	public:
		
		Victim(void);
		Victim(std::string name);
		Victim(Victim & instance);
		~Victim(void);

		Victim &	operator=(Victim const & instance);

		std::string		getName(void) const;

		virtual void	getPolymorphed(void) const;
};

std::ostream &		operator<<(std::ostream & output, Victim const & instance);

#endif