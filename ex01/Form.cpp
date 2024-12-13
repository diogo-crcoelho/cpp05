/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh@student.42lisboa.com <dcarvalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 04:47:14 by dcarvalh@st       #+#    #+#             */
/*   Updated: 2024/11/28 04:47:14 by dcarvalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form :: Form(): name("default"), ssigned(false), reqSignGrade(150), reqExecGrade(150){}

Form :: Form(std :: string name, int grade): name(name), ssigned(false), reqSignGrade(grade), reqExecGrade(grade){
    if (this->reqSignGrade < 1 || this->reqExecGrade < 1)
        throw Form :: GradeTooHighException();
    else if (this->reqSignGrade > 150 || this->reqExecGrade > 150)
        throw Form :: GradeTooLowException();
}

Form :: Form(Form const&copied): name(copied.name), ssigned(copied.ssigned), reqSignGrade(copied.reqSignGrade), reqExecGrade(copied.reqExecGrade){
    *this = copied;
    return *this;
}

Form &Form :: operator=(Form const&copied){
    Form *copy = new Form(copied.name, copied.reqExecGrade);
    return *copy;
}

Form :: ~Form(){}

int Form :: getGrades() {return this->reqExecGrade;}
std :: string Form :: getName() {return this->name;}

bool Form :: isSigned() { return this->ssigned; }

void Form :: beSigned(Bureaucrat &b){
    // std :: cout << this->reqSignGrade << " <><> " << b.getGrade() << std :: endl;
    if (this->reqSignGrade < b.getGrade()){
        throw Form :: GradeTooLowException();
    }
    ssigned = true;
}

const char* Form :: GradeTooHighException :: what() const throw() {
    return "Form Grade is too high";
}

const char* Form :: GradeTooLowException :: what() const throw() {
    return "Form Grade is too Low";
}

std :: ostream &operator<<(std :: ostream& os, Form& b){
    os << b.getName() << ", Form with required grades " << b.getGrades() << " and " << b.isSigned() << " as its signed status" << std :: endl;
    return os;
}
