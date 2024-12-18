/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:14:42 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/06 16:09:18 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

/*--------------------*/
/*  Define Cat class  */
/*--------------------*/
class	Cat : public Animal {

public:

	Cat( void );
	Cat( const Cat& other );
	Cat&	operator=( const Cat& other );
	~Cat( void );

	void	makeSound( void ) const override;

};

#endif
