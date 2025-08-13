/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:43:37 by jose-gon          #+#    #+#             */
/*   Updated: 2025/08/13 19:00:19 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Array.hpp>

int main() {
    Array<int> arr(3);
    try {
        std::cout << arr[5] << std::endl; // fuera de rango
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}
