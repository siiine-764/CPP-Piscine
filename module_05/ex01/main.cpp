/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:42:03 by mayache-          #+#    #+#             */
/*   Updated: 2024/02/17 19:24:28 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat b1("John", 30);
        Form form1("Form1", 30, 50);
        std::cout << "-->" << b1 << std::endl;
        std::cout << "-->" << form1 << std::endl;

        b1.signForm(form1);
        form1.beSigned(b1);
        form1.execute(b1);
        std::cout << "-->" << b1 << std::endl;
        std::cout << "-->" << form1 << std::endl;
        // std::cout << "-------------\n";
        // std::cout << "-------------\n";

        Bureaucrat b2("Alice", 19);
        Form form2("Form2", 19, 20);
        std::cout << b2 << std::endl;
        b2.signForm(form2);
        form2.beSigned(b2);
        form2.execute(b2);
        
        std::cout << form2 << std::endl;


        // Uncommenting the line below will throw an exception
        // Form form3("Form3", 151, 160);

    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}