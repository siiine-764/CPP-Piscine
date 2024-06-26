/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:08:43 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/20 03:54:20 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("Shrubbery", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm("Shrubbery", 145, 137)
{
    *this = obj;
}
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 145, 137)
{
    this->target = "default";
}

std::string    ShrubberyCreationForm::getTarget() const
{
    return (target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

    if (!this->getIsSigned())
    {
        throw(FormNotSigned());
    }
    else if (this->getSignGrade() < executor.getGrade())
    {
        throw(GradeDontPermit());
    }
    else
    {
        std::string tree = 
              "      *\n"
               "     /|\\\n"
               "    / | \\\n"
              "   /  |  \\\n"
              "  /   |   \\\n"
               " /    |    \\\n"
             "/_____|_____\\\n"
                "     | |\n"
              "    -----      \n";
        std::ofstream file(this->getTarget() + "_shrubbery");
        if (!file)
        {
            std::cout << "it looks like an error appears while creating the output file" << std::endl;
            return;
        }
        file << tree;
        std::cout << "ShrubberyCreationForm executed successfully by " << executor.getName() << std::endl;
    }
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
    this->target = obj.target;
    return *this;
}


ShrubberyCreationForm::~ShrubberyCreationForm() {}

