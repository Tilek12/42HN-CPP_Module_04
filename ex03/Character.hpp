/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:32:55 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/07 18:35:57 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class	Character : public ICharacter {

private:

	std::string	_name;
	AMateria*	_inventory[4];

	void	_clearInventory( void );
	void	_copyInventory( const Character& other );

public:

	Character( const std::string& name );
	Character( const Character& other );
	Character&	operator=( const Character& other );
	~Character( void );

	const std::string&	getName( void ) const override;
	void				equip( AMateria* m ) override;
	void				unequip( int idx ) override;
	void				use( int idx, ICharacter& target ) override;
	AMateria*			getMateria(int idx) const;

};

#endif
