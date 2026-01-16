#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cctype>

class Zombie
{
private:
    std::string name;
public:
    std::string getname();
    void setname(std::string first);
    Zombie(std::string first);
    void announce();
    ~Zombie();
};

#endif