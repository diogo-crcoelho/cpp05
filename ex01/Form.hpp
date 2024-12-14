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


class Form {
    public :
        Form();
        Form(std :: string, int);
        Form(Form const&);
        Form &operator=(Form const&);
        ~Form();

        std :: string getName();
        int  getGrades();
        bool isSigned() const;
        void beSigned(Bureaucrat &);

        class GradeTooHighException : public std :: exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std :: exception {
            public:
                virtual const char* what() const throw();
        };
    private :
        const std :: string name;
        bool                ssigned;
        const int         reqSignGrade;
        const int           reqExecGrade;   
};

std :: ostream &operator<<(std :: ostream &, Form &);

