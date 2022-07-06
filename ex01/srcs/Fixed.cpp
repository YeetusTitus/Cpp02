/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:51:28 by jforner           #+#    #+#             */
/*   Updated: 2022/07/05 12:02:31 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

//Constructor and destructor
Fixed::Fixed()
{
	this->_nbr = 0;
	std::cout <<  "Fixed created" << std::endl;
	return;
}

Fixed::~Fixed()
{
	std::cout <<  "Fixed destroyed" << std::endl;
	return ;
}

//special constructor
Fixed::Fixed(const Fixed &fix)
{
	std::cout <<  "Fixed copied" << std::endl;
	this->_nbr = fix.getRawBits();
}

Fixed::Fixed(int nbr)
{
	std::cout <<  "int copied" << std::endl;
	this->_nbr = nbr << this->_comma;
}

Fixed::Fixed(float flo)
{
	std::cout <<  "flotant copied" << std::endl;
	this->_nbr = (int)roundf(flo * (float)(1  << this->_comma));
}



//overcharged operator

Fixed&	Fixed::operator =(const Fixed &fix)
{
	std::cout <<  "Fixed copied operator" << std::endl;
	this->_nbr = fix.getRawBits();
	return *this;
}


Fixed&	Fixed::operator =( Fixed &fix)
{
	std::cout <<  "Fixed copied operator" << std::endl;
	this->_nbr = fix.getRawBits();
	return *this;
}

std::ostream&	operator<<(std::ostream& os, const Fixed& fix2)
{
	os << fix2.toFloat();
	return os;
}

//getter and setter
int Fixed::getRawBits( void ) const
{
	return this->_nbr;
}
void Fixed::setRawBits( int const raw )
{
	this->_nbr = raw;
}

//other

float Fixed::toFloat( void ) const
{
	return ((float)(this->_nbr) / (float)(1 << this->_comma));
}

int Fixed::toInt( void ) const
{
	return (this->_nbr >> this->_comma);
}
