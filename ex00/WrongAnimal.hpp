/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:00:30 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/05 17:01:51 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>
# include "colors.hpp"

class WrongAnimal {

protected:

	std::string	_type;

public:

	WrongAnimal( void );
	WrongAnimal( const WrongAnimal& other );
	WrongAnimal&	operator=( const WrongAnimal& other );
	virtual	~WrongAnimal( void );

	std::string		getType( void ) const;
	void			makeSound( void ) const;

};

#endif
