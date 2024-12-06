/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:19:16 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/06 15:09:59 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {

	_type = "Cat";
	print( "Cat class Constructor called.", CYAN );
}

Cat::Cat( const Cat& other ) : Animal( other ) {
	print( "Cat class Copy Constructor called.", CYAN );
}

Cat&	Cat::operator=( const Cat& other ) {

	if ( this != &other ) {
		Animal::operator=( other );
		print( "Cat class Copy Assignment operator called.", CYAN );
	}

	return *this;
}

Cat::~Cat( void ) {
	print( "Cat class Destructor called.", CYAN );
}

void	Cat::makeSound( void ) const {
	print( "Meow!", B_CYAN );
}
