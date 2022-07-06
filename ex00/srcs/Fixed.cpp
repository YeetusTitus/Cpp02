/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:51:28 by jforner           #+#    #+#             */
/*   Updated: 2022/07/05 12:19:18 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

//Constructor and destructor
Fixed::Fixed()
{
	_nbr = 0;
	std::cout <<  "Fixed created" << std::endl;
	return;
}

Fixed::~Fixed()
{
	std::cout <<  "Fixed destroyed" << std::endl;
	return ;
}

//copy
Fixed::Fixed(const Fixed &fix)
{
	std::cout <<  "Fixed copied" << std::endl;
	_nbr = fix.getRawBits();
}



//overcharged operator

Fixed&	Fixed::operator =(const Fixed &fix)
{
	std::cout <<  "Fixed copied operator" << std::endl;
	this->_nbr = fix.getRawBits();
	return *this;
}

Fixed&	Fixed::operator =(Fixed &fix)
{
	std::cout <<  "Fixed copied operator" << std::endl;
	this->_nbr = fix.getRawBits();
	return *this;
}

//others
int Fixed::getRawBits( void ) const
{
	return _nbr;
}

void Fixed::setRawBits( int const raw )
{
	this->_nbr = raw;
}