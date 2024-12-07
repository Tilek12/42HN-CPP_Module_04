/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:14:42 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/06 17:47:36 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

/*--------------------*/
/*  Define Cat class  */
/*--------------------*/
class	Cat : public Animal {

private:

	Brain*	_brain;

public:

	Cat( void );
	Cat( const Cat& other );
	Cat&	operator=( const Cat& other );
	~Cat( void );

	void		makeSound( void ) const override;
	void		setIdea( int index, const std::string& idea );
	std::string	getIdea( int index ) const;

};

#endif
