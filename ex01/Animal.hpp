/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:31:20 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/06 19:02:41 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "utils.hpp"

/*-----------------------*/
/*  Define Animal class  */
/*-----------------------*/
class Animal {

protected:

	std::string	_type;

public:

	Animal( void );
	Animal( const Animal& other );
	Animal&	operator=( const Animal& other );
	virtual	~Animal( void );

	std::string		getType( void ) const;
	virtual void	makeSound( void ) const;

};

#endif
