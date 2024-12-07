/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 10:47:45 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/07 12:04:25 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( std::string const& type ) : _type( type ) {}

// AMateria::AMateria( const AMateria& other ) : _type( other._type ) {}

// AMateria&	AMateria::operator=( const AMateria& other ) {

// 	if ( this != &other ) {
// 		_type = other._type;
// 	}

// 	return *this;
// }

AMateria::~AMateria( void ) {}

std::string const&	AMateria::getType() const { return _type; }

// void	AMateria::use( ICharacter& target ) {
// 	std::cout << "* uses some undefined materia on "
// 			  << target.getName()
// 			  << " *\n";
// }
