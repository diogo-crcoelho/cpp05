/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh@student.42lisboa.com <dcarvalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 02:49:13 by dcarvalh@st       #+#    #+#             */
/*   Updated: 2024/12/06 02:49:13 by dcarvalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm :: RobotomyRequestForm(std :: string target): AForm("RobotomyRequestForm", 72, 45), target(target){;}

RobotomyRequestForm :: RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy), target(copy.target) {}

RobotomyRequestForm &RobotomyRequestForm :: operator=(const RobotomyRequestForm &copy) {
    *this = RobotomyRequestForm(copy.target);
    return *this;
}

RobotomyRequestForm :: ~RobotomyRequestForm() {}

std :: string RobotomyRequestForm :: getTarget() { return this->target; }

void RobotomyRequestForm :: executor() const {
    std :: cout << "*drilling noises* " << target;
    std :: cout << (rand() % 2 ? " has been succesfully robotomized!" : " has failed its robotomization!");
    std :: cout << std :: endl;
}