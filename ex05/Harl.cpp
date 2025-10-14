#include "Harl.hpp"

Harl::Harl(void)
{
    std::cout << "Harl constructor" << std::endl;
}

Harl::~Harl(void)
{
    std::cout << "Harl destructor" << std::endl;
}

void Harl::debug(void)
{
    std::cout << "DEBUG" << std::endl;
}
void Harl::info(void)
{
    std::cout << "INFO" << std::endl;
}
void Harl::warning(void)
{
    std::cout << "WARNING" << std::endl;
}
void Harl::error(void)
{
    std::cout << "ERROR" << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string table[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    for (i = 0; i < 4; i++) 
    {
        if (level == table[i])
            break;
    }
    if (i < 4)
    {
        (this->*f[i])();
        return;
    }
    std::cout << "Invalid level" << std::endl;
}