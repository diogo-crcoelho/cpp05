/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:26:36 by dcarvalh          #+#    #+#             */
/*   Updated: 2024/11/18 11:31:30 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;


class AForm {
    public :
        AForm(std :: string, int, int);
        AForm(AForm const&);
        AForm &operator=(AForm const&);
        virtual ~AForm();

        std :: string getName() const;
        int getGradeToSign();
        int getGradeToExecute();
        bool isSigned();
        void beSigned(Bureaucrat &);
        void execute(Bureaucrat const &) const;
        virtual void executor() const = 0;
        class GradeTooHighException : public std :: exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std :: exception {
            public:
                virtual const char* what() const throw();
        };

        class NotSignedException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
    private :
        AForm();
        const std :: string name;
        bool                ssigned;
        const int         reqSignGrade;
        const int           reqExecGrade;   
};

std :: ostream &operator<<(std :: ostream &, AForm &);

