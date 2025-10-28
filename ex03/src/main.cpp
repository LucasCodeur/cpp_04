/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:09:24 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/28 19:18:16 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Character.hpp"
#include "LinkedList.hpp"

int	main(void)
{
	try 
	{

		Ice			test;
		Ice			test1;
		Ice			test2;
		Ice			test3;
		ICharacter*	Bob = new Character();
		ICharacter*	JeanMouloud = new Character();
		// ICharacter*	JeanMouloud1 = new Character();
		// ICharacter*	JeanMouloud2 = new Character();
		// ICharacter*	JeanMouloud3 = new Character();
		// test.use(*JeanMouloud);
		Bob->equip(&test);
		// Bob->equip(&test1);
		// Bob->equip(&test2);
		// Bob->equip(&test3);
		Bob->use(0, *JeanMouloud);
		// Bob->use(1, *JeanMouloud1);
		// Bob->use(2, *JeanMouloud2);
		// Bob->use(3, *JeanMouloud3);
		Bob->unequip(0);
		delete Bob;
		delete JeanMouloud;
		// delete JeanMouloud1;
		// delete JeanMouloud2;
		// delete JeanMouloud3;
	}
	catch (const std::bad_alloc& e)
	{
		std::cout << "bad_alloc caught: " << e.what();
		return (1);
	}
	return (0);
}
