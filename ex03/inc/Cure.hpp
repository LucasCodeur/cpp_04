/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:21:10 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/28 19:22:08 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

#include <string>

class Cure : public AMateria
{
	protected:

	public:
		Cure(void);
		Cure(std::string const & type);
		Cure(Cure &other);
		~Cure(void);
		Cure& operator=(const Cure &other);
		std::string const & getType() const;

		Cure* clone() const;
		void use(ICharacter& target);
};

#endif
