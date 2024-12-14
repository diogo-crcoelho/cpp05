/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh@student.42lisboa.com <dcarvalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 02:43:25 by dcarvalh@st       #+#    #+#             */
/*   Updated: 2024/12/06 02:43:25 by dcarvalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm: public AForm{
    public:
        PresidentialPardonForm(std :: string);
        PresidentialPardonForm(PresidentialPardonForm const &);
        PresidentialPardonForm &operator=(PresidentialPardonForm const &);
        virtual ~PresidentialPardonForm();

        std :: string getTarget() const;
        void executor() const;

    private:
        PresidentialPardonForm();
        std :: string target;
};