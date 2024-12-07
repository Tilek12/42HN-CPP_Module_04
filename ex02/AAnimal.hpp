/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:31:20 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/07 08:40:16 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include "utils.hpp"

/*------------------------*/
/*  Define AAnimal class  */
/*------------------------*/
class AAnimal {

protected:

	std::string	_type;

public:

	AAnimal( void );
	AAnimal( const AAnimal& other );
	AAnimal&	operator=( const AAnimal& other );
	virtual	~AAnimal( void );

	std::string		getType( void ) const;
	virtual void	makeSound( void ) const = 0;

};

#endif
