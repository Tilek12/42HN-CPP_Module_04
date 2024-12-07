/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:34:43 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/06 16:20:18 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

/*--------------------*/
/*  Define Dog class  */
/*--------------------*/
class	Dog : public Animal {

private:

	Brain*	_brain;

public:

	Dog( void );
	Dog( const Dog& other );
	Dog&	operator=( const Dog& other );
	~Dog( void );

	void		makeSound( void ) const override;
	void		setIdea( int index, const std::string& idea );
	std::string	getIdea( int index ) const;

};

#endif
