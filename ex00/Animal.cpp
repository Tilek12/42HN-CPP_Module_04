/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:41:06 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/05 10:53:41 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( const std::string type ) : _type( type ) {
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

void	Animal::makeSound( void ) {
	std::cout << "Make some noise, Animal..." << std::endl;
}
