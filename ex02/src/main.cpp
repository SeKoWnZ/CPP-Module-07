/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:43:37 by jose-gon          #+#    #+#             */
/*   Updated: 2025/08/25 11:52:30 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Array.hpp>
#include <ctime>
#include <cstdlib>

int main()
{
    std::srand(std::time(0));  
    int i = rand() % 10;
    Array<int> arr(i);

    std::cout << "The size of the array is: " <<  arr.size() << std::endl;
    try
    {
        std::cout << arr[5] << std::endl; // fuera de rango
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}
