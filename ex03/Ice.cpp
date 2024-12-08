/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:21:00 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/08 20:41:42 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*-------------------------*/
/*  Ice Class constructor  */
/*-------------------------*/
Ice::Ice( void ) : AMateria( "ice" ) {}

/*------------------------------*/
/*  Ice Class copy constructor  */
/*------------------------------*/
Ice::Ice( const Ice& other) : AMateria( other._type ) {}

/*--------------------------------------*/
/*  Ice Class copy assignment operator  */
/*--------------------------------------*/
Ice&	Ice::operator=( const Ice& other ) {

	( void )other;
	std::cerr << RED
			  << "Assignment operator is not allowed for Ice since _type is const.\n"
			  << RESET;
	return *this;
}

/*------------------------*/
/*  Ice Class destructor  */
/*------------------------*/
Ice::~Ice( void ) {}

/*-------------------------*/
/*  Define clone function  */
/*-------------------------*/
AMateria*	Ice::clone( void ) const {
	return new Ice( *this );
}

/*-----------------------*/
/*  Define use function  */
/*-----------------------*/
void	Ice::use( ICharacter& target ) {
	std::cout << YELLOW
			  << "* shoots an ice bolt at " << target.getName() << " *\n"
			  << RESET;
}
