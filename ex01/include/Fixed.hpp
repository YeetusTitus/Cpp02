/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:15:39 by jforner           #+#    #+#             */
/*   Updated: 2022/07/05 12:04:29 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <string>
# include <iostream>
# include <cstring>
# include <fstream>
# include <cmath>

class Fixed {

private :
	int					_nbr;
	int const static	_comma = 8;

public:
	Fixed();
	~Fixed();
	
	Fixed(const Fixed &fix);
	Fixed(int nbr);
	Fixed(float flo);

	Fixed&	operator =(Fixed &fix);
	Fixed&	operator =(const Fixed &fix);

	int 	getRawBits( void ) const;
	void 	setRawBits( int const raw );
	
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fix2);
#endif