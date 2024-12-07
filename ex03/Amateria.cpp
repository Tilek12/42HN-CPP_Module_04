/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 10:47:45 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/07 18:05:58 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( std::string const& type ) : _type( type ) {}

AMateria::AMateria( const AMateria& other ) : _type( other._type ) {}

AMateria&	AMateria::operator=( const AMateria& other ) {

	( void )other;
	std::cerr << "Assignment operator is not allowed for AMateria since _type is const.\n";
	return *this;
}

AMateria::~AMateria( void ) {}

std::string const&	AMateria::getType() const { return _type; }

void	AMateria::use( ICharacter& target ) {
	std::cout << "* uses some undefined materia on "
			  << target.getName()
			  << " *\n";
}
