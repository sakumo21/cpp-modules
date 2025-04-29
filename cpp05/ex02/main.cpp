#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // seed for random

    try {
        Bureaucrat bob("Bob", 1);
        Bureaucrat low("LowRank", 150);

        ShrubberyCreationForm shrub("Garden");
        RobotomyRequestForm robo("Bender");
        PresidentialPardonForm pardon("Ford Prefect");

        std::cout << "\n== Signing Forms ==" << std::endl;
        bob.signForm(shrub);
        bob.signForm(robo);
        bob.signForm(pardon);

        std::cout << "\n== Executing Forms with Bob ==" << std::endl;
        bob.executeForm(shrub);
        bob.executeForm(robo);
        bob.executeForm(pardon);

        std::cout << "\n== Executing Forms with LowRank ==" << std::endl;
        low.executeForm(shrub);  // should fail
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}