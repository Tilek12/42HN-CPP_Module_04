/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:12:22 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/05 17:15:29 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {

	_type = "WrongCat";
	std::cout << "WrongCat class Constructor called." << std::endl;
}

WrongCat::WrongCat( const WrongCat& other ) {

	_type = other._type;
	std::cout << "WrongCat class Copy Constructor called." << std::endl;
}

WrongCat&	WrongCat::operator=( const WrongCat& other ) {

	if ( this != &other ) {
		_type = other._type;
		std::cout << "WrongCat class Copy Assignment operator called." << std::endl;
	}

	return *this;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat class Destructor called." << std::endl;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "Undefined sound from WrongCat..." << std::endl;
}
