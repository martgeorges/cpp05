/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:01:15 by mgeorges          #+#    #+#             */
/*   Updated: 2025/06/20 09:56:43 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat(const std::string name, int _grade);
        Bureaucrat(const Bureaucrat &copy);
        ~Bureaucrat();
        Bureaucrat & operator = (const Bureaucrat &src);

        std::string getName() const;
        int getGrade() const;

        int incrementGrade(int grade);
        int decrementGrade(int grade);

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw() 
                {
                    return "Grade too High";
                }
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw()
                {
                    return "Grade too low";
                }
                
        };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif