#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie();
    std::string getname();
    void setname(std::string first);
    void announce();
    ~Zombie();
};
Zombie* zombieHorde( int N, std::string name );
#endif