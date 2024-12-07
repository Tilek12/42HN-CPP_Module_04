/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkubanyc <tkubanyc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 18:56:47 by tkubanyc          #+#    #+#             */
/*   Updated: 2024/12/06 19:00:50 by tkubanyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

/*-------------------------*/
/*  Define print function  */
/*-------------------------*/
void	print( const std::string& message, const std::string& msgColor ) {
	std::cout << msgColor << message << RESET << std::endl;
}
