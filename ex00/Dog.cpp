/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:02:49 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/05 12:13:51 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {

	_type = "Dog";
	std::cout << "Dog class Constructor called." << std::endl;
}

Dog::Dog( const Dog& other ) {
	_type = other._type;
	std::cout << "Dog class Copy Constructor called." << std::endl;
}

Dog&	Dog::operator=( const Dog& other ) {

	if ( this != &other ) {
		_type = other._type;
		std::cout << "Dog class Copy Assignment operator called." << std::endl;
	}

	return *this;
}

Dog::~Dog( void ) {
	std::cout << "Dog class Destructor called." << std::endl;
}

void	Dog::makeSound( void ) const {
	std::cout << "Woof!" << std::endl;
}
