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

int main(void)
{
  std::cout << "Enter a grade: ";
  int grade;
  std::cin >> grade;
  try 
  {
    Form e("ff", grade);
    std::cout << "" << std::endl;
    Bureaucrat	Marvin("Marvin", 5);
    std::cout << Marvin;
    Form	x("28C", 4);
    Form	y("28D", 10);
    std::cout << "" << std::endl;
    std::cout << x;
    Marvin.signForm(x);
    std::cout << x;
    std::cout << "" << std::endl;
    std::cout << y;
    Marvin.signForm(y);
    std::cout << y;
    std::cout << "" << std::endl;
    Marvin.signForm(y);
  } 
  catch (std :: exception &exc){
    std :: cerr << "Exception: " << exc.what()<< std :: endl;
  }
}