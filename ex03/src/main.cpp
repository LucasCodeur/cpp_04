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

int	main(void)
{
	try 
	{
		Ice			*test = new Ice;
		Ice			test1;
		test1.setStack(true);
		Character*	Bob = new Character();
		Character*	JeanMouloud = new Character();
		Bob->equip(test);
		Bob->equip(&test1);
		*JeanMouloud = *Bob;
		delete Bob;
		delete JeanMouloud;
	}
	catch (const std::bad_alloc& e)
	{
		std::cout << "bad_alloc caught: " << e.what();
		return (1);
	}
	return (0);
}

// int main()
// {
// IMateriaSource* src = new MateriaSource();
// src->learnMateria(new Ice());
// src->learnMateria(new Cure());
// ICharacter* me = new Character("me");
// AMateria* tmp;
// tmp = src->createMateria("ice");
// me->equip(tmp);
// tmp = src->createMateria("cure");
// me->equip(tmp);
// ICharacter* bob = new Character("bob");
// me->use(0, *bob);
// me->use(1, *bob);
// delete bob;
// delete me;
// delete src;
// return 0;
// }
