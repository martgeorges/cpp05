/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:01:30 by mgeorges          #+#    #+#             */
/*   Updated: 2025/07/03 10:42:28 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name) {
    std::cout << "Bureaucrat constructor called" << std::endl;
    if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = copy;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat &src) {
    //std::cout << getName() << " bureaucrat grade " << getGrade() << "." << std::endl;
    if (this != &src)
        _grade = src._grade;
    return *this;
}

std::string Bureaucrat::getName() const {
    return (this->_name);
}

int Bureaucrat::getGrade() const {
    return (this->_grade); 
}

void Bureaucrat::incrementGrade() {
    if (_grade == 1)
    {
        throw GradeTooHighException();
    } else
        _grade--;
}

void Bureaucrat::decrementGrade() {
    if (_grade == 150) {
        throw GradeTooLowException();
    } else
        _grade++;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl;
    return os;
}   

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("\033[1;31mGrade too high!\033[0m\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("\033[1;31mGrade too low!\033[0m\n");
}