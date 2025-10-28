/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:09:36 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/28 17:44:45 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKEDLIST_HPP
# define LINKEDLIST_HPP

#include "AMateria.hpp"
#include "Node.hpp"

#include <iostream>

class LinkedList
{
	public:
		LinkedList();
		~LinkedList();
		LinkedList(const LinkedList &other);
		LinkedList &operator=(const LinkedList &other);
		void add(AMateria* ptr);
	private:
		Node*	_head;
};
#endif
