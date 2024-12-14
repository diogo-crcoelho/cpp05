/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh@student.42lisboa.com <dcarvalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 02:43:25 by dcarvalh@st       #+#    #+#             */
/*   Updated: 2024/12/06 02:43:25 by dcarvalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm{
    public:
        ShrubberyCreationForm(std :: string);
        ShrubberyCreationForm(ShrubberyCreationForm const &);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);
        virtual ~ShrubberyCreationForm();

        std :: string getTarget() const;
        void executor() const;

    private:
        ShrubberyCreationForm();
        std :: string target;
};