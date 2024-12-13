/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh@student.42lisboa.com <dcarvalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 02:43:25 by dcarvalh@st       #+#    #+#             */
/*   Updated: 2024/12/06 02:43:25 by dcarvalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <ctime>
#include <cstdlib>

class RobotomyRequestForm: public AForm{
    public:
        RobotomyRequestForm(std :: string const &);
        RobotomyRequestForm(RobotomyRequestForm const &);
        RobotomyRequestForm &operator=(RobotomyRequestForm const &);
        virtual ~RobotomyRequestForm();

        std :: string getTarget();
        void executor() const;

    private:
        RobotomyRequestForm();
        std :: string target;
};