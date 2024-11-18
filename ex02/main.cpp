/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:51:45 by dcarvalh          #+#    #+#             */
/*   Updated: 2024/08/23 15:39:51 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
    {
        try
        {
            Bureaucrat	Marvin("Marvin", 150);
            Bureaucrat	Jesus("Jesus", 1);
            std::cout << Marvin << Jesus;
            ShrubberyCreationForm	s("Beelzebub");
            std :: cout << "" << std :: endl;
            std::cout << s;
            Marvin.signForm(s);
            Jesus.signForm(s);
            std::cout << s;
            std :: cout << "" << std :: endl;
            Marvin.executeForm(s);
            std :: cout << "" << std :: endl;
            Jesus.executeForm(s);
        }
        catch(Bureaucrat::GradeTooLowException &e)
        {
            std::cerr << "Bureaucrat construction failed because " << e.what() << ".\n";
        }
        catch(Bureaucrat::GradeTooHighException &e)
        {
            std::cerr << "Bureaucrat construction failed because " << e.what() << ".\n";
        }
    }
    std::cout << "\n----------------------------------------------------" << std::endl;
    {
        try
        {
            std :: cout << "" << std :: endl;
            Bureaucrat	Marvin("Marvin", 60);
            Bureaucrat	Jesus("Jesus", 1);
            std::cout << Marvin << Jesus;
            RobotomyRequestForm	p("Beelzebub");
            std :: cout << "" << std :: endl;
            std::cout << p;
            Marvin.signForm(p);
            std::cout << p;
            std :: cout << "" << std :: endl;
            Marvin.executeForm(p);
            std :: cout << "" << std :: endl;
            Jesus.executeForm(p);
            Jesus.executeForm(p);
            Jesus.executeForm(p);
            Jesus.executeForm(p);
        }
        catch(Bureaucrat::GradeTooLowException &e)
        {
            std::cerr << "Bureaucrat construction failed because " << e.what() << ".\n";
        }
        catch(Bureaucrat::GradeTooHighException &e)
        {
            std::cerr << "Bureaucrat construction failed because " << e.what() << ".\n";
        }
    }
    std::cout << "\n----------------------------------------------------" << std::endl;
    {
        try
        {
            std :: cout << "" << std :: endl;
            Bureaucrat	Marvin("Marvin", 60);
            Bureaucrat	Jesus("Jesus", 1);
            std::cout << Marvin << Jesus;
            PresidentialPardonForm	p("Beelzebub");
            std :: cout << "" << std :: endl;
            std::cout << p;
            Marvin.signForm(p);
            std::cout << p;
            std :: cout << "" << std :: endl;
            Marvin.executeForm(p);
            std :: cout << "" << std :: endl;
            Jesus.executeForm(p);
            Jesus.signForm(p);
            Jesus.executeForm(p);
        }
        catch(Bureaucrat::GradeTooLowException &e)
        {
            std::cerr << "Bureaucrat construction failed because " << e.what() << ".\n";
        }
        catch(Bureaucrat::GradeTooHighException &e)
        {
            std::cerr << "Bureaucrat construction failed because " << e.what() << ".\n";
        }
    }
}