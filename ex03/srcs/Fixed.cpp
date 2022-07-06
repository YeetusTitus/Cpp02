/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:51:28 by jforner           #+#    #+#             */
/*   Updated: 2022/07/05 12:20:27 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

//Constructor and destructor
Fixed::Fixed()
{
	this->_nbr = 0;
	// std::cout <<  "Fixed created" << std::endl;
	return;
}

Fixed::~Fixed()
{
	// std::cout <<  "Fixed destroyed" << std::endl;
	return ;
}

//special constructor
Fixed::Fixed(const Fixed &fix)
{
	// std::cout <<  "Fixed copied" << std::endl;
	this->_nbr = fix.getRawBits();
}

Fixed::Fixed(int nbr)
{
	// std::cout <<  "int copied" << std::endl;
	this->_nbr = nbr << this->_comma;
}

Fixed::Fixed(float flo)
{
	// std::cout <<  "flotant copied" << std::endl;
	this->_nbr = (int)roundf(flo * (float)(1  << this->_comma));
}



//overcharged operator
	//equal
Fixed&	Fixed::operator =(const Fixed &fix)
{
	// std::cout <<  "Fixed copied operator" << std::endl;
	this->_nbr = fix.getRawBits();
	return *this;
}


Fixed&	Fixed::operator =( Fixed &fix)
{
	// std::cout <<  "Fixed copied operator" << std::endl;
	this->_nbr = fix.getRawBits();
	return *this;
}

	//compare

bool	Fixed::operator ==(Fixed fix)const
{
	if (this->getRawBits() == fix.getRawBits())
		return true;
	return false;
}
bool	Fixed::operator !=(Fixed fix)const
{
	if (this->getRawBits() != fix.getRawBits())
		return true;
	return false;
}
bool	Fixed::operator >(Fixed fix)const
{
	if (this->getRawBits() > fix.getRawBits())
		return true;
	return false;
}
bool	Fixed::operator <(Fixed fix)const
{
	if (this->getRawBits() < fix.getRawBits())
		return true;
	return false;
}
bool	Fixed::operator >=(Fixed fix)const
{
	if (this->getRawBits() >= fix.getRawBits())
		return true;
	return false;
}
bool	Fixed::operator <=(Fixed fix)const
{
	if (this->getRawBits() <= fix.getRawBits())
		return true;
	return false;
}
	//operation
float	Fixed::operator +(Fixed fix)const
{
	float	flo;

	flo = this->toFloat() + fix.toFloat();
	return flo;
}
float	Fixed::operator -(Fixed fix)const
{
	float	flo;

	flo = this->toFloat() - fix.toFloat();
	return flo;
}
float	Fixed::operator *(Fixed fix)const
{
	float	flo;

	flo = this->toFloat() * fix.toFloat();
	return flo;
}
float	Fixed::operator /(Fixed fix)const
{
	float	flo;

	flo = this->toFloat() / fix.toFloat();
	return flo;
}


	//increment decrement left
Fixed	Fixed::operator ++(void)
{
	this->_nbr++;
	return *this;
}
Fixed	Fixed::operator --(void)
{
	this->_nbr--;
	return *this;
}
	//increment decrement right
Fixed	Fixed::operator ++(int)
{
	Fixed rt;
	rt.setRawBits(this->_nbr++);
	return rt;
}
Fixed	Fixed::operator --(int)
{
	Fixed rt;
	rt.setRawBits(this->_nbr--);
	return rt;
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


Fixed& Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1.getRawBits() <= f2.getRawBits())
		return f1;
	return f2;
}
const Fixed& Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1.getRawBits() <= f2.getRawBits())
		return f1;
	return f2;
}
Fixed& Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1.getRawBits() >= f2.getRawBits())
		return f1;
	return f2;
}
const Fixed& Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1.getRawBits() >= f2.getRawBits())
		return f1;
	return f2;
}

//Not  in the class
std::ostream&	operator<<(std::ostream& os, const Fixed& fix2)
{
	os << fix2.toFloat();
	return os;
}