/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:02:08 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/05 17:08:11 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type( "WrongAnimal" ) {
	std::cout << "WrongAnimal class Constructor called." << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other ) : _type( other._type ) {
	std::cout << "WrongAnimal class Copy Constructor called." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& other ) {

	if ( this != &other ) {
		_type = other._type;
		std::cout << "WrongAnimal class Copy Assignment operator called." << std::endl;
	}

	return *this;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal class Destructor called." << std::endl;
}

std::string	WrongAnimal::getType( void ) const {
	return _type;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "WrongAnimal makes weird sound..." << std::endl;
}
