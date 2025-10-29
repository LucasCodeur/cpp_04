/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:09:24 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/29 15:24:26 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

// int	main(void)
// {
// 	try 
// 	{
// 		Ice			*test = new Ice;
// 		test->setMalloc(true);
// 		Ice			*test1 = new(Ice);
// 		test1->setMalloc(true);
// 		Ice			test2;
// 		Ice			test3;
// 		Character*	Bob = new Character();
// 		Character*	JeanMouloud = new Character();
// 		// ICharacter*	JeanMouloud1 = new Character();
// 		// ICharacter*	JeanMouloud2 = new Character();
// 		// ICharacter*	JeanMouloud3 = new Character();
// 		Bob->equip(test);
// 		Bob->equip(test1);
// 		JeanMouloud->equip(test);
// 		Bob->unequip(0);
// 		JeanMouloud->unequip(0);
// 		// JeanMouloud->equip(&test1);
// 		// std::cout << "Bob = JeanMouloud" << std::endl;
// 		// JeanMouloud = Bob;
// 		// JeanMouloud->use(0, *Bob);
// 		// std::cout << JeanMouloud->_inventory.slots[0] << " :adresse of test" << std::endl;
// 		// Bob->equip(&test1);
// 		// Bob->equip(&test2);
// 		// Bob->equip(&test3);
// 		// Bob->use(0, *JeanMouloud);
// 		// Bob->use(1, *JeanMouloud1);
// 		// Bob->use(2, *JeanMouloud2);
// 		// Bob->use(3, *JeanMouloud3);
// 		// Bob->unequip(0);
// 		delete Bob;
// 		delete JeanMouloud;
// 		// delete JeanMouloud1;
// 		// delete JeanMouloud2;
// 		// delete JeanMouloud3;
// 	}
// 	catch (const std::bad_alloc& e)
// 	{
// 		std::cout << "bad_alloc caught: " << e.what();
// 		return (1);
// 	}
// 	return (0);
// }

int main()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete src;
return 0;
}
