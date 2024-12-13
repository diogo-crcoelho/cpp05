/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:53:39 by dcarvalh          #+#    #+#             */
/*   Updated: 2024/11/18 11:51:35 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat :: Bureaucrat(): name("default"), grade(1){}

Bureaucrat :: Bureaucrat(std :: string name, int grade): name(name), grade(grade){
    if (this->grade < 1)
        throw Bureaucrat :: GradeTooHighException();
    else if(this->grade > 150)
        throw Bureaucrat :: GradeTooLowException();
}

Bureaucrat :: Bureaucrat(Bureaucrat const&copied){
    *this = copied;
}
             
Bureaucrat &Bureaucrat :: operator=(Bureaucrat const&copied){
    Bureaucrat *copy = Bureaucrat(copied.name, copied.grade);
    return *copy;
}

Bureaucrat :: ~Bureaucrat(){}

int Bureaucrat :: getGrade() {return this->grade;}
std :: string Bureaucrat :: getName() {return this->name;}

void Bureaucrat :: incGrade(){
    if (this->grade > 1)
        --(this->grade);
    else
        throw Bureaucrat :: GradeTooHighException();
}

void Bureaucrat :: decGrade(){
    if (this->grade < 150)
        ++(this->grade);
    else
        throw Bureaucrat :: GradeTooLowException();
}

const char* Bureaucrat :: GradeTooHighException :: what() const throw() {
    return "Grade is too high";
}

const char* Bureaucrat :: GradeTooLowException :: what() const throw() {
    return "Grade is too Low";
}

std :: ostream &operator<<(std :: ostream& os, Bureaucrat& b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << std :: endl;
    return os;
}