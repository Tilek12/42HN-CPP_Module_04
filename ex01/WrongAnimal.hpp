/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:00:30 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/06 19:00:57 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "utils.hpp"

/*----------------------------*/
/*  Define WrongAnimal class  */
/*----------------------------*/
class WrongAnimal {

protected:

	std::string	_type;

public:

	WrongAnimal( void );
	WrongAnimal( const WrongAnimal& other );
	WrongAnimal&	operator=( const WrongAnimal& other );
	~WrongAnimal( void );

	std::string		getType( void ) const;
	void			makeSound( void ) const;

};

#endif
