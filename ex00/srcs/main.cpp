/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:24:28 by jforner           #+#    #+#             */
/*   Updated: 2022/07/06 16:39:35 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

int main() 
{
	Fixed a;
	
	a.setRawBits(1);
	Fixed b( a );
	
	std::cout << "b = " << b.getRawBits() << std::endl;
	Fixed c;

	b.setRawBits(5);
	c = b;
	
	std::cout << "a = " << a.getRawBits() << std::endl;
	std::cout << "b = " <<  b.getRawBits() << std::endl;
	std::cout << "c = " << c.getRawBits() << std::endl;
	// system("leaks fix");
	return 0;
}