/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:22:53 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/16 17:12:25 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() 
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->_type = "Dog";
	this->_Brain = new Brain;
	this->_Brain->ideas[0] = "I'm a dog";
}

Dog::Dog(const Dog &other)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	this->_Brain = new Brain;
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Copy assignment Dog operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
		*this->_Brain = *other._Brain;
	}
	return (*this);
}

Dog::~Dog() 
{
	std::cout << "Destructor Dog called" << std::endl;
	delete this->_Brain;
}

std::string	Dog::getType(void) const
{
	return (this->_type);
}

void	Dog::makeSound(void) const
{
	std::cout << "Waf" << std::endl;
}

void	Dog::printBrainIdeas(void) const
{
	this->_Brain->printIdeas();
}

void	Dog::setIdeas(std::string idea)
{
	this->_Brain->setIdea(idea);
}
