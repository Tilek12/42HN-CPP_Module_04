/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:19:16 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/06 16:02:53 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*-------------------------*/
/*  Cat Class constructor  */
/*-------------------------*/
Cat::Cat( void ) {

	_type = "Cat";
	print( "Cat class Constructor called.", CYAN );
}

/*------------------------------*/
/*  Cat Class copy constructor  */
/*------------------------------*/
Cat::Cat( const Cat& other ) : Animal( other ) {
	print( "Cat class Copy Constructor called.", CYAN );
}

/*--------------------------------------*/
/*  Cat Class copy assignment operator  */
/*--------------------------------------*/
Cat&	Cat::operator=( const Cat& other ) {

	if ( this != &other ) {
		Animal::operator=( other );
		print( "Cat class Copy Assignment operator called.", CYAN );
	}

	return *this;
}

/*------------------------*/
/*  Cat Class destructor  */
/*------------------------*/
Cat::~Cat( void ) {
	print( "Cat class Destructor called.", CYAN );
}

/*-------------------------------*/
/*  Override makeSound function  */
/*-------------------------------*/
void	Cat::makeSound( void ) const {
	print( "Meow!", B_CYAN );
}
