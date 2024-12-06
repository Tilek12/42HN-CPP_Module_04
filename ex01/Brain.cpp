/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:39:12 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/06 15:53:37 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {

	for ( int i = 0; i < 100; i++ ) {
		ideas[i] = "some idea";
	}

	std::cout << "Brain class Constructor called.\n";
}

Brain::Brain( const Brain& other ) {

	for ( int i = 0; i < 100; i++ ) {
		ideas[i] = other.ideas[i];
	}

	std::cout << "Brain class Copy Constructor called.\n";
}

Brain&	Brain::operator=( const Brain& other ) {

	if ( this != &other ) {
		for ( int i = 0; i < 100; i++ ) {
			ideas[i] = other.ideas[i];
		}
		std::cout << "Brain class Copy Assignment operator called.\n";
	}

	return *this;
}

Brain::~Brain( void ) {
	std::cout << "Brain class Destructor called.\n";
}

void	Brain::setIdea( int index, const std::string& idea ) {

	if ( 0 <= index < 100 ) {
		ideas[index] = idea;
	}
}

std::string	Brain::getIdea( int index ) const {

	if ( 0 <= index < 100 ) {
		return ideas[index];
	}

	return "Incorrect index";
}
