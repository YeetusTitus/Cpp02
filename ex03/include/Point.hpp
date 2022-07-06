/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 23:03:27 by jforner           #+#    #+#             */
/*   Updated: 2022/07/05 18:19:42 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Change_H
# define Change_H
# include "Fixed.hpp"

class Point {

private :
	Fixed const		x;
	Fixed const 	y;

public:
	Point();
	~Point();
	
	Point(const Point &pointer);
	Point(float f1, float f2);

	Point&	operator =(Point &pointer);
	Point&	operator =(const Point &pointer);
	
	Fixed const getX(void) const;
	Fixed const getY(void) const;
	void setX(Fixed const);
	void setY(Fixed const);
};

// std::ostream&	operator<<(std::ostream& os, const Point& pointer);
bool bsp( Point const a, Point const b, Point const c, Point const point);
int calculus( Point const n1, Point const n2, Point const point);
#endif