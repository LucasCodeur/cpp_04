/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:14:11 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/27 17:33:18 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>

class ICharacter 
{
	public:
		ICharacter();
		ICharacter(const ICharacter &other);
		ICharacter &operator=(const ICharacter &other);
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		// virtual void equip(AMateria* m) = 0;
		// virtual void unequip(int idx) = 0;
		// virtual void use(int idx, ICharacter& target) = 0;
	private:
		std::string	_name;
};

#endif
