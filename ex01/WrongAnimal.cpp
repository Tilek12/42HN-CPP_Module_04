/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:02:08 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/06 15:10:19 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type( "WrongAnimal" ) {
	print( "WrongAnimal class Constructor called.", RED );
}

WrongAnimal::WrongAnimal( const WrongAnimal& other ) : _type( other._type ) {
	print( "WrongAnimal class Copy Constructor called.", RED );
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& other ) {

	if ( this != &other ) {
		_type = other._type;
		print( "WrongAnimal class Copy Assignment operator called.", RED );
	}

	return *this;
}

WrongAnimal::~WrongAnimal( void ) {
	print( "WrongAnimal class Destructor called.", RED );
}

std::string	WrongAnimal::getType( void ) const {
	return _type;
}

void	WrongAnimal::makeSound( void ) const {
	print( "* Weird sound from WrongAnimal... *", B_RED );
}

void	WrongAnimal::print( std::string message, std::string msgColor ) const {
	std::cout << msgColor << message << RESET << std::endl;
}
