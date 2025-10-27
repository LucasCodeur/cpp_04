/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:25:28 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/24 19:17:38 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) 
{
	std::cout << "Default Constructor of Ice called" << std::endl;
	this->_type = "ice";
}

Ice::Ice(std::string const & type) : AMateria(type)
{
	std::cout << "Parameterized Constructor of Ice called" << std::endl;
	this->_type = type;
}

Ice::Ice(Ice &other) : AMateria(other._type)
{
	std::cout << "Copy Constructor of Ice called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
}

Ice::~Ice(void)
{
	std::cout << "Deconstructor of Ice called" << std::endl;
}

Ice& Ice::operator=(const Ice &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

Ice* Ice::clone(void) const
{
	Ice*	newIce;

	newIce = new Ice;
	if (newIce == NULL)
		return (NULL);
	return (newIce);
}
