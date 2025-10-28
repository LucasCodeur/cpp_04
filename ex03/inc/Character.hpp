/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 10:27:28 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/28 20:25:05 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "LinkedList.hpp"

struct	inventory
{
	AMateria*	slots[4];
	LinkedList*	floor;
};

class Character : public ICharacter
{
	public:
		Character();
		~Character();
		Character(const Character &other);
		Character(std::string name);
		Character &operator=(const Character &other);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);	
		
	private:
		std::string _name;
		inventory	_inventory;
};

#endif
