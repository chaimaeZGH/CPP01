#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <vector>
#include <cctype>

class Zombie
{
private:
    std::string name;
public:
    std::string getname();
    void setname(std::string first);
    Zombie(){};
    void announce();
    ~Zombie();
};

#endif