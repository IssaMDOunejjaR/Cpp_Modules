/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 13:03:06 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/27 18:52:19 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class	Sorcerer
{
	std::string		name;
	std::string		title;

	Sorcerer(void);

	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer & instance);
		~Sorcerer(void);

		Sorcerer &		operator=(Sorcerer const & instance);

		std::string		getName(void) const;
		std::string		getTitle(void) const;

		void	polymorph(Victim const & instance);
};

std::ostream &		operator<<(std::ostream & output, Sorcerer const & instance);

#endif