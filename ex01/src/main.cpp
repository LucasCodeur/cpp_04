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

int	main(void)
{
	Animal	*arrayOfAnimal[4];
	Dog		temp; 
	Dog		temp2; 

	arrayOfAnimal[0] = new Dog();
	arrayOfAnimal[1] = new Dog();
	arrayOfAnimal[2] = new Cat();
	arrayOfAnimal[3] = new Cat();
	for (int i = 0; i < 4; i++)
	{
		arrayOfAnimal[i]->makeSound();
		delete arrayOfAnimal[i];
	}
	temp.setIdeas("One piece is the best manga of the world");
	temp.setIdeas("Berserk is good");
	temp.setIdeas("Kingdom is very good");
	temp.printBrainIdeas();
	std::cout << "temp2 before" << std::endl;
	temp2.printBrainIdeas(); 
	temp2 = temp;
	std::cout << "temp2 after" << std::endl;
	temp2.printBrainIdeas(); 
	return (0);
}
