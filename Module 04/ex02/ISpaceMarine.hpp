/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:47:03 by iounejja          #+#    #+#             */
/*   Updated: 2021/06/29 15:54:17 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class	ISpaceMarine
{
	public:
		virtual ~ISpaceMarine(void) {}
		virtual ISpaceMarine* clone(void) const = 0;
		virtual void battleCry(void) const = 0;
		virtual void rangedAttack(void) const = 0;
		virtual void meleeAttack(void) const = 0;
};

#endif