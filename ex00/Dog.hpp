/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:34:43 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/05 12:01:13 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOF_HPP

# include "Animal.hpp"

class	Dog : public Animal {

public:

	Dog( void );
	Dog( const Dog& other );
	Dog&	operator=( const Dog& other );
	~Dog( void );

	void	makeSound( void ) const override;

};

#endif
