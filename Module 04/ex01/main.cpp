/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <iounejja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:16:28 by iounejja          #+#    #+#             */
/*   Updated: 2021/07/01 20:12:32 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int		main(void)
{
	Character* me = new Character("me");

	std::cout << *me;

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	Enemy* b = new RadScorpion();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	Enemy*	a = new SuperMutant();

	me->equip(pf);
	std::cout << *me;
	me->attack(a);
	me->equip(pr);
	std::cout << *me;
	me->attack(a);
	me->attack(a);
	me->equip(pf);
	std::cout << *me;
	me->attack(a);
	me->recoverAP();
	me->attack(a);
	std::cout << *me;

	return (0);
}