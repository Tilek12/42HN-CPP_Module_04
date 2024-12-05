/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:41:06 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/05 11:58:11 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type( "Animal" ) {
	std::cout << "Animal class Constructor called." << std::endl;
}

Animal::Animal( const Animal& other ) : _type( other._type ) {
	std::cout << "Animal class Copy Constructor called." << std::endl;
}

Animal&	Animal::operator=( const Animal& other ) {

	if ( this != &other ) {
		_type = other._type;
	}

	std::cout << "Animal class Copy Assignment operator called." << std::endl;
	return *this;
}

Animal::~Animal( void ) {
	std::cout << "Animal class Destructor called." << std::endl;
}

std::string	Animal::getType( void ) const {
	return _type;
}

void	Animal::makeSound( void ) const {
	std::cout << "Make some noise, Animal..." << std::endl;
}
