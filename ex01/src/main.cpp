/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:27:42 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/16 17:22:38 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Animal	arrayOfAnimal[4];
	arrayOfAnimal[0] = Dog();
	arrayOfAnimal[1] = Dog();
	arrayOfAnimal[2] = Cat();
	arrayOfAnimal[3] = Cat();
	for (int i = 0; i < ((int)(sizeof(arrayOfAnimal) / sizeof(arrayOfAnimal[0]))); i++)
		arrayOfAnimal[i].makeSound();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	return (0);
}
