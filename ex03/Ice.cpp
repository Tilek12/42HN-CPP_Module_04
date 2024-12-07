/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:21:00 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/07 14:03:53 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria( "ice" ) {}

Ice::Ice( const Ice& other) : AMateria( other._type ) {}

Ice&	Ice::operator=( const Ice& other ) {

	if ( this != &other ) {
		_type = other._type;
	}

	return *this;
}

Ice::~Ice( void ) {}

AMateria*	Ice::clone( void ) const {
	return new Ice( *this );
}

void	Ice::use( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
