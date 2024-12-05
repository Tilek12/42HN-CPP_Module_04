/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:19:16 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/05 12:24:39 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {

	_type = "Cat";
	std::cout << "Cat class Constructor called." << std::endl;
}

Cat::Cat( const Cat& other ) {

	_type = other._type;
	std::cout << "Cat class Copy Constructor called." << std::endl;
}

Cat&	Cat::operator=( const Cat& other ) {

	if ( this != &other ) {
		_type = other._type;
		std::cout << "Cat class Copy Assignment operator called." << std::endl;
	}

	return *this;
}

Cat::~Cat( void ) {
	std::cout << "Cat class Destructor called." << std::endl;
}

void	Cat::makeSound( void ) const {
	std::cout << "Meow!" << std::endl;
}
