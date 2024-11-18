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

#include <string>
#include <iostream>

class Form {
    public :
        Form();
        Form(std :: string, int);
        Form(Form const&);
        Form &operator=(Form const&);
        ~Form();
    
    private :
        const std :: string name;
        bool                isSigned;
        const int           reqSignGrade;
        const int           reqExecGrade;
        

    
}