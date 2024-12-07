/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:34:36 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/07 18:06:11 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria( "cure" ) {}

Cure::Cure( const Cure& other ) : AMateria( other._type ) {}

Cure&	Cure::operator=( const Cure& other ) {

	( void )other;
	std::cerr << "Assignment operator is not allowed for Cure since _type is const.\n";
	return *this;
}

Cure::~Cure( void ) {}

AMateria*	Cure::clone( void ) const {
	return new Cure( *this );
}

void	Cure::use( ICharacter& target ) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
