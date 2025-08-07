/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:18:35 by jose-gon          #+#    #+#             */
/*   Updated: 2025/08/07 18:06:02 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <whatever.hpp>

// int main()
// {
// 	int a = 1, b = 5;
	
// 	std::cout << "Value of a: " << a << std::endl;
// 	std::cout << "Value of b: "	<< b << std::endl;
// 	swap(a, b);
// 	std::cout << "New value of a: " << a << std::endl;
// 	std::cout << "New value of b: "	<< b << std::endl;
// 	std::cout << "Max a and b is: " << max(a, b) << std::endl;
// 	std::cout << "Min a and b is: " << min(a, b) << std::endl;
// }

int	main()
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}