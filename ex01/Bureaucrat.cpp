/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:53:39 by dcarvalh          #+#    #+#             */
/*   Updated: 2024/08/23 15:45:02 by dcarvalh         ###   ########.fr       */
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
    grade = copied.grade;
    return *this;
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

void Bureaucrat :: signForm(Form &f){
    if (f.isSigned()){
        std :: cout << this->name << " cannot sign " << f.getName() << " because it is already signed" << std :: endl;
        return ;
    }
    try{
        f.beSigned(*this);
        std :: cout << this->name << " signs " << f.getName() << std :: endl;
    } catch (std :: exception &e) {
            std :: cout << this->name << " cannot sign " << f.getName() << " because " << e.what() << std :: endl;
        }
}

const char* Bureaucrat :: GradeTooHighException :: what() const throw() {
    return "Grade is too high";
}

const char* Bureaucrat :: GradeTooLowException :: what() const throw() {
    return "Grade is too Low";
}

std :: ostream &operator<<(std :: ostream& os, Bureaucrat& b){
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << std :: endl;
    return os;
}