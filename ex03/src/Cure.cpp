/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:22:12 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/28 19:31:42 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(void) 
{
	std::cout << "Default Constructor of Cure called" << std::endl;
	this->_type = "cure";
}

Cure::Cure(std::string const & type) : AMateria(type)
{
	std::cout << "Parameterized Constructor of Cure called" << std::endl;
	this->_type = type;
}

Cure::Cure(Cure &other) : AMateria(other._type)
{
	std::cout << "Copy Constructor of Cure called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
		this->equipped = other.equipped;
	}
}

Cure::~Cure(void)
{
	std::cout << "Deconstructor of Cure called" << std::endl;
}

Cure& Cure::operator=(const Cure &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		this->equipped = other.equipped;
	}
	return (*this);
}

Cure* Cure::clone(void) const
{
	Cure*	newCure;

	newCure = new Cure;
	return (newCure);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *";
}
