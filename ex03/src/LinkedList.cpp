/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:09:29 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/28 18:49:39 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LinkedList.hpp"

LinkedList::LinkedList()
{
	std::cout << "Default LinkedList constructor called" << std::endl;
	this->_head = NULL;
}

LinkedList::LinkedList(const LinkedList &other)
{
	std::cout << "Copy LinkedList constructor called" << std::endl;
	if (this != &other)
		this->_head = other._head;
}

LinkedList	&LinkedList::operator=(const LinkedList &other)
{
	std::cout << "Copy LinkedList assignment operator called" << std::endl;
	if (this != &other)
		this->_head = other._head;
	return (*this);
}

LinkedList::~LinkedList()
{
	std::cout << "Destructor LinkedList called" << std::endl;
	if (_head == NULL)
		return ;
	Node*	temp = this->_head->getNext();
	while (temp != this->_head && temp != NULL)
	{
		Node*	temp2 = temp;
		if (temp2 == NULL)
			break ;
		temp = temp->getNext();
		delete temp2;
	}
	delete this->_head;
}

void	LinkedList::add(AMateria* ptr)
{
	if (ptr == NULL)
		return ;
	Node*	newNode = new Node();
	newNode->setPtr(ptr);
	if (this->_head == NULL)
	{
		std::cout << "INSDEEEEEEEEEEEEEEEEEEEEEEEEEEE\n";
		this->_head = newNode;
	}
	else
	{
		Node*	temp = this->_head;
		while (temp->getNext() != NULL)
			temp = temp->getNext();
		temp->setNext(newNode);
	}
}

void	LinkedList::remove(AMateria* ptr)
{
	if (ptr == NULL)
		return ;

	Node*	temp = this->_head;
	if (temp == NULL)
		return ;

	Node*	temp1 = NULL;

	while (temp != NULL && temp->getPtr() != ptr)
	{
		temp1 = temp;
		temp = temp->getNext();
	}
	if (temp1 != NULL && temp != NULL)
		temp1->setNext(temp->getNext());
	else
	{
		if (this->_head != NULL)
		{
			std::cout << "INSIDE THIS IF REMOVE FIFFERENT NULL\n";
			delete this->_head;
			this->_head = NULL;
		}
	}

}
