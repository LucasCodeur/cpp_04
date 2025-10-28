/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:18:53 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/27 17:15:03 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

#include <iostream>
#include <string>

class Ice : public AMateria
{
	protected:

	public:
		Ice(void);
		Ice(std::string const & type);
		Ice(Ice &other);
		~Ice(void);
		Ice& operator=(const Ice &other);
		std::string const & getType() const;

		Ice* clone() const;
		void use(ICharacter& target);
};

#endif
