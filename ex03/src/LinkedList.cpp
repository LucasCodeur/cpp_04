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
	this->_head = new (Node);
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
		this->_head->setNext(newNode);
	else
	{
		Node*	temp = this->_head;
		while (temp->getNext() != NULL)
			temp = temp->getNext();
		temp->setNext(newNode);
	}
}
