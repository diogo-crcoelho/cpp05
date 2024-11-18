/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh@student.42lisboa.com <dcarvalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 04:47:14 by dcarvalh@st       #+#    #+#             */
/*   Updated: 2024/11/28 04:47:14 by dcarvalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm :: AForm(): name("default"), ssigned(false), reqSignGrade(150), reqExecGrade(150){}

AForm :: AForm(std :: string name, int sGrade, int eGrade): name(name), ssigned(false), reqSignGrade(sGrade), reqExecGrade(eGrade){
    if (this->reqSignGrade < 1 || this->reqExecGrade < 1)
        throw AForm :: GradeTooHighException();
    else if (this->reqSignGrade > 150 || this->reqExecGrade > 150)
        throw AForm :: GradeTooLowException();
}

AForm :: AForm(AForm const&copied): name(copied.name), ssigned(copied.ssigned), reqSignGrade(copied.reqSignGrade), reqExecGrade(copied.reqExecGrade){
    *this = copied;
}

AForm &AForm :: operator=(AForm const&copied){
    this->ssigned = copied.ssigned;
    return *this;
}

AForm :: ~AForm(){}

int AForm :: getGradeToExecute() {return this->reqExecGrade;}
int AForm :: getGradeToSign() {return this->reqSignGrade;}

std :: string AForm :: getName() const {return this->name;}

bool AForm :: isSigned() { return this->ssigned; }

void AForm :: beSigned(Bureaucrat &b){
    // std :: cout << this->reqSignGrade << " <><> " << b.getGrade() << std :: endl;
    if (this->reqSignGrade < b.getGrade()){
        throw AForm :: GradeTooLowException();
    }
    ssigned = true;
}

const char* AForm :: GradeTooHighException :: what() const throw() {
    return "Form Grade is too high";
}

const char* AForm :: GradeTooLowException :: what() const throw() {
    return "Form Grade is too Low";
}

std :: ostream &operator<<(std :: ostream& os, AForm& b){
    os << b.getName() << ", Form with required grades " << b.getGradeToSign() << ", " << b.getGradeToExecute() << " and "  << b.isSigned() << " as its signed status" << std :: endl;
    return os;
}

void AForm :: execute(const Bureaucrat &b) const {
    if (!ssigned)
        throw AForm :: NotSignedException();
    else if (b.getGrade() > this->reqExecGrade)
        throw AForm :: GradeTooLowException();
    else
        this->executor();
}

const char *AForm::NotSignedException::what() const throw() {
    return "Form not signed";
}