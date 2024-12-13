/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh@student.42lisboa.com <dcarvalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 02:18:43 by dcarvalh@st       #+#    #+#             */
/*   Updated: 2024/12/13 02:18:43 by dcarvalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern{
    public:
        Intern();
        Intern(Intern const&);
        Intern &operator=(Intern const&);
        ~Intern();

        AForm* makeForm(std :: string, std :: string);
        class FormDoesNotExistException: public std :: exception {
            public:
                virtual const char *what() const throw();
        };
};