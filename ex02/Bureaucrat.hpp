/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:53:34 by dcarvalh          #+#    #+#             */
/*   Updated: 2024/08/23 15:39:23 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
    public:
        Bureaucrat();
        Bureaucrat(std :: string, int);
        Bureaucrat(Bureaucrat const&);
        Bureaucrat &operator=(Bureaucrat const&);
        ~Bureaucrat();
    
        std :: string getName() const;
        int getGrade() const;

        void incGrade();
        void decGrade();
        void signForm(AForm &);
        void executeForm(AForm const &);
        class GradeTooHighException : public std :: exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std :: exception {
            public:
                virtual const char* what() const throw();
        };
        
    private:
        const std :: string name;
        int grade;
};

std :: ostream &operator<<(std :: ostream &, Bureaucrat &);

#endif