/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 10:47:45 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/08 11:35:29 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*------------------------------*/
/*  AMateria Class constructor  */
/*------------------------------*/
AMateria::AMateria( std::string const& type ) : _type( type ) {}

/*-----------------------------------*/
/*  AMateria Class copy constructor  */
/*-----------------------------------*/
AMateria::AMateria( const AMateria& other ) : _type( other._type ) {}

/*-------------------------------------------*/
/*  AMateria Class copy assignment operator  */
/*-------------------------------------------*/
AMateria&	AMateria::operator=( const AMateria& other ) {

	( void )other;
	std::cerr << RED
			  << "Assignment operator is not allowed for AMateria since _type is const.\n"
			  << RESET;
	return *this;
}

/*-----------------------------*/
/*  AMateria Class destructor  */
/*-----------------------------*/
AMateria::~AMateria( void ) {}

/*---------------------------*/
/*  Define getType function  */
/*---------------------------*/
std::string const&	AMateria::getType() const { return _type; }

/*-----------------------*/
/*  Define use function  */
/*-----------------------*/
void	AMateria::use( ICharacter& target ) {
	std::cout << YELLOW
			  << "* uses some undefined materia on "
			  << target.getName()
			  << " *\n"
			  << RESET;
}
