/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh@student.42lisboa.com <dcarvalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 02:49:13 by dcarvalh@st       #+#    #+#             */
/*   Updated: 2024/12/06 02:49:13 by dcarvalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm :: PresidentialPardonForm(std :: string const& target): AForm("PresidentialPardonForm", 25, 5), target(target){;}

PresidentialPardonForm :: PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy), target(copy.target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {
    *this = PresidentialPardonForm(copy.target);
    return *this;
}

PresidentialPardonForm :: ~PresidentialPardonForm() {}

std :: string PresidentialPardonForm :: getTarget() { return this->target; }

void PresidentialPardonForm :: executor() const {
    std :: cout << target << " has been pardoned by  Zaphod Beeblebrox!" << std :: endl;
}