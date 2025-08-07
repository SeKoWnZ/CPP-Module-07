/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:18:35 by jose-gon          #+#    #+#             */
/*   Updated: 2025/08/07 17:59:24 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <whatever.hpp>

int main()
{
	int a = 1, b = 5;
	
	std::cout << "Value of a: " << a << std::endl;
	std::cout << "Value of b: "	<< b << std::endl;
	swap(a, b);
	std::cout << "New value of a: " << a << std::endl;
	std::cout << "New value of b: "	<< b << std::endl;
	std::cout << "Max a and b is: " << max(a, b) << std::endl;
	std::cout << "Min a and b is: " << min(a, b) << std::endl;
}
