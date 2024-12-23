/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh@student.42lisboa.com <dcarvalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 02:49:13 by dcarvalh@st       #+#    #+#             */
/*   Updated: 2024/12/06 02:49:13 by dcarvalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm :: ShrubberyCreationForm(std :: string target): AForm("ShrubberyCreationForm", 145, 137), target(target){;}

ShrubberyCreationForm :: ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy), target(copy.target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
    this->target = copy.getTarget();
    return *this;
}

ShrubberyCreationForm :: ~ShrubberyCreationForm() {}

std :: string ShrubberyCreationForm :: getTarget() const { return this->target; }

void ShrubberyCreationForm :: executor() const {
    std :: ofstream file((this->target + "_shrubbery").c_str());
    file << "   *   \n"
            "  ***  \n"
            " ***** \n"
            "   |   \n";
    file.close();
}