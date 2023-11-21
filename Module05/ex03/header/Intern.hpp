#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(const Intern &copy);
        Intern& operator=(const Intern &copy);
        AForm *makeForm(const std::string &formName, const std::string &target);

};
#endif //INTERN_HPP