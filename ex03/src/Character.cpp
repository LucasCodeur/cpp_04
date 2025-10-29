/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 10:25:21 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/28 20:18:12 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "LinkedList.hpp"

Character::Character()
{
	std::cout << "Default Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_name = "Bob";
	this->floor = new (LinkedList);
}

Character::Character(const Character &other)
{
	std::cout << "Copy Character constructor called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = other._inventory[i]->clone();
		this->_name = other._name;
	}
	this->floor = new (LinkedList);
}

Character::Character(std::string name)
{
	std::cout << "Copy Parameterized constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_name = name;
	this->floor = new (LinkedList);
}

Character	&Character::operator=(const Character &other)
{
	std::cout << "Copy Character assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			this->unequip(i);
			this->_inventory[i] = other._inventory[i]->clone();
		}
		this->_name = other._name;
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Destructor Character called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	delete floor;
}

std::string const & Character::getName() const 
{
	return (this->_name);	
}

void	Character::equip(AMateria* m)
{
	if (m->getEquipped() == true)
	{
		std::cout << "Still equipped." << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			this->_inventory[i]->setEquipped(true);
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 4 && idx > -1)
	{
		if (this->_inventory[idx] == NULL)
		{
			std::cout << "There is nothing to take off." << std::endl;
			return ;
		}
		this->_inventory[idx]->setEquipped(false);
		if (this->_inventory[idx]->getMalloc() == true)
			floor->add(this->_inventory[idx]);
		this->_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && idx > -1 && this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}
