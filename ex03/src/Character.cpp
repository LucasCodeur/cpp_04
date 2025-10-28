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
		this->_inventory.slots[i] = NULL;
	this->_inventory.floor = new (LinkedList);
	this->_name = "Bob";
}

Character::Character(const Character &other)
{
	std::cout << "Copy Character constructor called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
			this->_inventory.slots[i] = other._inventory.slots[i];
		this->_name = other._name;
		this->_inventory.floor = new (LinkedList);
	}
}

Character::Character(std::string name)
{
	std::cout << "Copy Parameterized constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory.slots[i] = NULL;
	this->_inventory.floor = new (LinkedList);
	this->_name = name;
}

Character	&Character::operator=(const Character &other)
{
	std::cout << "Copy Character assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
			this->_inventory.slots[i] = other._inventory.slots[i];
		this->_name = other._name;
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Destructor Character called" << std::endl;
	if (this->_inventory.floor != NULL)
		delete this->_inventory.floor;
}

std::string const & Character::getName() const 
{
	return (this->_name);	
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory.slots[i] == NULL)
		{
			this->_inventory.slots[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 4 && idx > -1 && this->_inventory.slots[idx] != NULL)
	{
		this->_inventory.floor->add(this->_inventory.slots[idx]);
		this->_inventory.slots[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && idx > -1 && this->_inventory.slots[idx] != NULL)
		this->_inventory.slots[idx]->use(target);
}
