/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:01:30 by mgeorges          #+#    #+#             */
/*   Updated: 2025/06/24 08:27:48 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name), _grade(grade) {
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
    this->_grade = src._grade;
    return *this;
}

std::string Bureaucrat::getName() const {
    return (this->_name);
}

int Bureaucrat::getGrade() const {
    return (this->_grade); 
}

int Bureaucrat::incrementGrade(int grade) {
    if (grade < 1)
    {
        std::cout << "grade too high" << std::endl;
    } else {
        grade--;
    }
    return (grade);
}

int Bureaucrat::decrementGrade(int grade) {
    if (grade > 150) {
        std::cout << " grade too low " << std::endl;
    } else {
        grade++;
    }
    return (grade);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return os;
}   