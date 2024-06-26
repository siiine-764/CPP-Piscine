/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 22:15:23 by mayache-          #+#    #+#             */
/*   Updated: 2024/05/20 03:37:59 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//--------------------Construcotrs And Destructors--------------------//

AForm::AForm(const std::string& name, int signGrade, int execGrade)
    : name(name), isSigned(false), signGrade(signGrade), execGrade(execGrade) {
    if (signGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
    else if (signGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm& copy) : name(copy.name), signGrade(copy.signGrade), execGrade(copy.execGrade)
{
    *this = copy;
}
AForm::~AForm() {}

const std::string& AForm::getName() const {
    return this->name;
}

bool AForm::getIsSigned() const {
    return this->isSigned;
}

int AForm::getSignGrade() const {
    return this->signGrade;
}

int AForm::getExecGrade() const {
    return this->execGrade;
}

void AForm::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() <= signGrade)
        isSigned = true;
    else
        throw GradeTooLowException();
}

void AForm::execute(const Bureaucrat& executor) const {
    if (!isSigned)
        std::cout << executor.getName() << " couldn't execute " << name << " because it's not signed." << std::endl;
    else if (executor.getGrade() > execGrade)
        std::cout << executor.getName() << " couldn't execute " << name << " because grade is too low." << std::endl;
    else
        std::cout << executor.getName() << " executed " << name << "." << std::endl;
}

AForm& AForm::operator=(const AForm& Afrm)
{
    std::cout << "Assignation operator called" << std::endl;
    this->name = Afrm.name;
    this->isSigned = Afrm.isSigned;
    this->signGrade = Afrm.signGrade;
    this->execGrade = Afrm.execGrade;

    return *this;
}

std::ostream& operator<<(std::ostream& os, const AForm& form) {
    os << "Form: " << form.getName() << ", Sign Grade: " << form.getSignGrade() << ", Exec Grade: " << form.getExecGrade() << ", Signed: " << (form.getIsSigned() ? "Yes" : "No");
    return os;
}


//-------------------------Exceptions functions-------------------------//

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("It seems that you entered a grade higher than the bounds");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("It seems that you entered a grade lower than the bounds");
}

const char *AForm::FormNotSigned::what() const throw()
{
    return ("It seems that the form isn't signed");
}

const char *AForm::GradeDontPermit::what() const throw()
{
    return ("It seems that the grade of the bureaucrat dont permit to sing the form");
}

const char *AForm::CantSignForm::what() const throw()
{
    return ("That Form cant be signed by that Bureaucrat");
}