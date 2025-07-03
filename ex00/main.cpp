/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:01:00 by mgeorges          #+#    #+#             */
/*   Updated: 2025/07/03 07:03:46 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    std::cout << "==== Test 1: ====" << std::endl;
    /*try {
    }
    catch () {
        
    }*/
    /*Bureaucrat a("Martin", 151);
    Bureaucrat b("test", 0);

    std::cout << a << std::endl;
    std::cout << b << std::endl;*/
    std::cout << "\033[33m" << std::endl << "Test too high and too low creation" << "\033[0m" << std::endl;
	try
	{
		Bureaucrat Sleeper1("Bernd", 0);
	}
	catch(const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
    return 0;
}