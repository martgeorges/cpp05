/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:01:15 by mgeorges          #+#    #+#             */
/*   Updated: 2025/06/18 14:00:15 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat(const std::string name);
        Bureaucrat(const Bureaucrat &copy);
        ~Bureaucrat();
        Bureaucrat & operator = (const Bureaucrat &src);

        std::string getName() const;
        std::string getGrade() const;
};

#endif