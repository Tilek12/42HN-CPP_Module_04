/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:34:36 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/08 20:40:55 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*--------------------------*/
/*  Cure Class constructor  */
/*--------------------------*/
Cure::Cure( void ) : AMateria( "cure" ) {}

/*-------------------------------*/
/*  Cure Class copy constructor  */
/*-------------------------------*/
Cure::Cure( const Cure& other ) : AMateria( other._type ) {}

/*---------------------------------------*/
/*  Cure Class copy assignment operator  */
/*---------------------------------------*/
Cure&	Cure::operator=( const Cure& other ) {

	( void )other;
	std::cerr << RED
			  << "Assignment operator is not allowed for Cure since _type is const.\n"
			  << RESET;
	return *this;
}

/*-------------------------*/
/*  Cure Class destructor  */
/*-------------------------*/
Cure::~Cure( void ) {}

/*-------------------------*/
/*  Define clone function  */
/*-------------------------*/
AMateria*	Cure::clone( void ) const {
	return new Cure( *this );
}

/*-----------------------*/
/*  Define use function  */
/*-----------------------*/
void	Cure::use( ICharacter& target ) {
	std::cout << YELLOW
			  << "* heals " << target.getName() << "'s wounds *\n"
			  << RESET;
}
