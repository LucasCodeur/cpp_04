/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:23:22 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/13 11:32:07 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat();										//Default constructor
		~WrongCat();									//Destructor
		WrongCat(const WrongCat &other);				//Copy constructor
		WrongCat &operator=(const WrongCat &other);		//Copy operator
	private:
		std::string	getType(void) const;
		void	makeSound(void) const;
};
#endif
