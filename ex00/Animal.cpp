/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:41:06 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/06 14:55:40 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type( "Animal" ) {
	print( "Animal class Constructor called.", YELLOW );
}

Animal::Animal( const Animal& other ) : _type( other._type ) {
	print( "Animal class Copy Constructor called.", YELLOW );
}

Animal&	Animal::operator=( const Animal& other ) {

	if ( this != &other ) {
		_type = other._type;
		print( "Animal class Copy Assignment operator called.", YELLOW );
	}

	return *this;
}

Animal::~Animal( void ) {
	print( "Animal class Destructor called.", YELLOW );
}

std::string	Animal::getType( void ) const {
	return _type;
}

void	Animal::makeSound( void ) const {
	print( "* Some sound from Animal *", YELLOW );
}

void	Animal::print( std::string message, std::string msgColor ) const {
	std::cout << msgColor << message << RESET << std::endl;
}
