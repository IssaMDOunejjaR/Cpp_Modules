/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:10:48 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/01 15:22:40 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int		main(void)
{
	// ISpaceMarine* bob = new TacticalMarine;
	// ISpaceMarine* jim = new AssaultTerminator;
	// ISquad* vlc = new Squad;

	// vlc->push(bob);
	// vlc->push(jim);

	// for (int i = 0; i < vlc->getCount(); ++i)
	// {
	// 	ISpaceMarine* cur = vlc->getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// }

	// delete vlc;

	ISquad	*test = new Squad();
	ISpaceMarine *	s1 = new TacticalMarine();
	ISpaceMarine *	s2 = new AssaultTerminator();
	ISpaceMarine *	s3 = new TacticalMarine();

	test->push(s1);
	test->push(s2);
	test->push(s3);
	test->push(s2);
	test->push(s3);
	test->push(NULL);
	std::cout << test->getCount() << std::endl;
	for (int i = 0; i < test->getCount(); i++) {
		ISpaceMarine * unit = test->getUnit(i);
		unit->battleCry();
	}
	delete test;
	return (0);
}