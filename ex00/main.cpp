/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:01:00 by mgeorges          #+#    #+#             */
/*   Updated: 2025/06/20 10:57:31 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    std::cout << "==== Test 1: ====" << std::endl;
    /*try {
    }
    catch () {
        
    }*/
    Bureaucrat a("Martin", 122);
    Bureaucrat b("test", 42);

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    return 0;
}