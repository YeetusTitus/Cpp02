/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:16:54 by jforner           #+#    #+#             */
/*   Updated: 2022/07/05 16:37:16 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

//Constructor and destructor
Point::Point():x(0),y(0)
{
	// std::cout <<  "Point created" << std::endl;
	return;
}

Point::~Point()
{
	// std::cout <<  "Point destroyed" << std::endl;
	return ;
}


//special constructor
Point::Point(float f1, float f2):x(f1),y(f2)
{
	// std::cout <<  "float copied" << std::endl;
}


Point::Point(const Point &pointer):x(pointer.x),y(pointer.y)
{
	// std::cout <<  "Fixed copied" << std::endl;
}

//overcharged operator
Point&	Point::operator =(const Point &pointer)
{
	// std::cout <<  "Fixed copied operator" << std::endl;
	// this->x.setRawBits(pointer.x.getRawBits());
	// this->y.setRawBits(pointer.y.getRawBits());
	(Fixed &) this->x = pointer.x;
	(Fixed &) this->y = pointer.y;
	return *this;
}


Point&	Point::operator =(Point &pointer)
{
	// std::cout <<  "Fixed copied operator" << std::endl;
	// this->x.setRawBits(pointer.x.getRawBits());
	// this->y.setRawBits(pointer.y.getRawBits());
	(Fixed &) this->x = pointer.x;
	(Fixed &) this->y = pointer.y;
	return *this;
}

//getter setter

Fixed const Point::getX(void) const
{
    return (this->x);
}
Fixed const Point::getY(void) const
{
    return (this->y);
}

// void Point::setX(Fixed const fix)
// {
// 	this->x._nbr = fix.getRawBits();
// }
// void Point::setY(Fixed const fix)
// {
// 	this->y._nbr = fix.getRawBits();
// }
//other
// std::ostream&	operator<<(std::ostream& os, const Point& pointer)
// {
    
// }