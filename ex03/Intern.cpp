/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh@student.42lisboa.com <dcarvalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 02:21:45 by dcarvalh@st       #+#    #+#             */
/*   Updated: 2024/12/13 02:21:45 by dcarvalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern :: Intern(){}

Intern :: Intern(Intern const&copied){
    *this = copied;
}
             
Intern &Intern :: operator=(Intern const&copied){
    (void)copied;
    return *this;
}

Intern :: ~Intern(){}

AForm *Intern :: makeForm(std :: string name, std :: string target){
    std :: string forms[3] = {
        "presidential pardon",
        "robotomy request",
        "shrubbery creation"
    };
    int value = 0;
    for (; value <= 3; value++)
        if (forms[value] == name)
            break;
    if (value == 3)
        throw Intern::FormDoesNotExistException();
    std :: cout << "Intern creates " << name << std :: endl;
    switch(value){
        case 0:
            return new PresidentialPardonForm(target);
        case 1:
            return new RobotomyRequestForm(target);
        case 2:
            return new ShrubberyCreationForm(target);
        default:
            throw Intern::FormDoesNotExistException();
    }
}

const char *Intern :: FormDoesNotExistException :: what() const throw() {
    return "Form does not exist";
}