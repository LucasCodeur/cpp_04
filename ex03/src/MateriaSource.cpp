/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:57:31 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/29 15:33:07 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "LinkedList.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Default MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->floor = new LinkedList;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	std::cout << "Copy MateriaSource constructor called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = other._inventory[i]->clone();
	}
	this->floor = new (LinkedList);
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	std::cout << "Copy MateriaSource assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = other._inventory[i]->clone();
	}
	this->floor = new (LinkedList);
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "Destructor MateriaSource called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	delete floor;

}

void	MateriaSource::learnMateria(AMateria* type)
{
	if (type->getType() == "ice")
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i] == NULL)
			{
				this->_inventory[i] = new Ice;
				delete type;
				return ;
			}
		}
		std::cout << "full you have to clear out" << std::endl;
	}
	else if (type->getType() == "cure")
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i] == NULL)
			{
				this->_inventory[i] = new Cure;
				delete type;
				return ;
			}
		}
		std::cout << "full you have to clear out" << std::endl;
	}
	delete type;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL && this->_inventory[i]->getType() == type)
		{
			this->floor->add(this->_inventory[i]);
			this->_inventory[i] = NULL;
			if (type == "ice")
				return (new Ice);
			else if (type == "cure")
				return (new Cure);
		}
	}
	std::cout << "Not find" << std::endl;
	return (NULL);
}
