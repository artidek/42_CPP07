/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:54:26 by aobshatk          #+#    #+#             */
/*   Updated: 2025/10/20 12:48:07 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tmp.hpp"

int main (void)
{
	int a = 2;
	int b = 3;
	myNames::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << myNames::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << myNames::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	myNames::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << myNames::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << myNames::max( c, d ) << std::endl;
	return 0;
}
