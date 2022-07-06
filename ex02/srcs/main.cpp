/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:24:28 by jforner           #+#    #+#             */
/*   Updated: 2022/07/06 16:42:00 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

int main() 
{
	
	Fixed a;
	float flo = (Fixed( 5.05f ) * Fixed( 2 ));
	Fixed b( flo );
	Fixed const c(15);
	Fixed const d(b);

	a = 23.625f;
	flo = d + a;
	std::cout << "d + a is " << flo << std::endl;
	flo = a - b;
	std::cout << "a - b is " << flo  << std::endl;
	flo = c * d;
	std::cout << "c * d is " << flo << std::endl;
	flo = c / b;
	std::cout << "c / b is " << flo << std::endl;
	std::cout << std::endl;

	bool bol = d > a;
	std::cout << "d > a is " << bol << std::endl;
	bol = a <= b;
	std::cout << "a <= b is " << bol  << std::endl;
	bol = c == d;
	std::cout << "c == d is " << bol << std::endl;
	bol = c != b;
	std::cout << "c != b is " << bol << std::endl;
	std::cout << std::endl;

	std::cout << "a =" << a << std::endl;
	std::cout << "a =" << a-- << std::endl;
	std::cout << "a =" << a << std::endl;
	std::cout << "a =" << ++a << std::endl;
	std::cout << "a =" << a << std::endl;
	std::cout << std::endl;

	std::cout << "c,d min " << Fixed::min(c, d) << std::endl;
	std::cout << "a,b max " << Fixed::max(a, b) << std::endl;
	std::cout << "a,c min " << Fixed::min(a, c) << std::endl;
	std::cout << "b,d max " << Fixed::max(b, d) << std::endl;

// system("leaks fix");
	return 0;
}