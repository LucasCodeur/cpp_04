/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:22:53 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/14 20:37:01 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() 
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->_type = "Dog";
	this->_Brain = new Brain;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	*this = other;
	this->_Brain = new Brain;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Copy assignment Dog operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
		this->_brain = other._brain;

	}
	return (*this);
}

Dog::~Dog() 
{
	std::cout << "Destructor Dog called" << std::endl;
	delete this->_brain;
}

std::string	Dog::getType(void) const
{
	return (this->_type);
}

void	Dog::makeSound(void) const
{
	std::cout << "Waf" << std::endl;
}
