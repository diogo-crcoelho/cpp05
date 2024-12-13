/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarvalh <dcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:51:45 by dcarvalh          #+#    #+#             */
/*   Updated: 2024/11/18 11:50:15 by dcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
  std :: cout << "Enter a grade: ";
  int grade;
  std :: cin >> grade;
  try 
  {
    Bureaucrat a("Soups", grade);
    std :: cout << a.getName() << ": " << a.getGrade() << std :: endl;
    a.incGrade();
    std :: cout << a.getName() << " incremented his grade to " << a.getGrade() << std :: endl;
    a.decGrade();
    std :: cout << a.getName() << " reseted his grade to " << a.getGrade() << std :: endl;
    a.decGrade();
    std :: cout << a.getName() << " decremented his grade to " << a.getGrade() << std :: endl;

    std :: cout << a << std :: endl;
  } 
  catch (std :: exception &exc){
    std :: cerr << "Exception: " << exc.what()<< std :: endl;
  }
}