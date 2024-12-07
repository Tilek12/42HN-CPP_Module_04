/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:42:11 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/07 14:58:58 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( const std::string& name ) : _name( name ) {

	for ( int i = 0; i < 4; i++ ) {
		_inventory[i] = nullptr;
	}
}

Character::Character( const Character& other ) : _name( other._name ) {

	for ( int i = 0; i < 4; i++ ) {
		_inventory[i] = nullptr;
	}

	_copyInventory( other );
}

Character&	Character::operator=( const Character& other ) {

	if ( this != &other ) {
		_name = other._name;
		_clearInventory();
		_copyInventory( other );
	}

	return *this;
}

Character::~Character( void ) {
	_clearInventory();
}

void	Character::_clearInventory( void ) {

	for ( int i = 0; i < 4; i++ ) {
		delete _inventory[i];
		_inventory[i] = nullptr;
	}
}

void	Character::_copyInventory( const Character& other ) {

	for ( int i = 0; i < 4; i++ ) {
		if ( other._inventory[i] )
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = nullptr;
	}
}

const std::string&	Character::getName( void ) const {
	return _name;
}

void	Character::equip( AMateria* m ) {

	for ( int i = 0; i < 4; i++ ) {
		if ( !_inventory[i]) {
			_inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip( int idx ) {

	if ( idx < 4 && idx >= 0) {
		_inventory[idx] = nullptr;
	}
}

void	Character::use( int idx, ICharacter& target ) {
	if ( idx < 4 && idx >= 0 && _inventory[idx] ) {
		_inventory[idx]->use(target);
	}
}
