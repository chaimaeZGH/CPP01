#include "Zombie.h"

Zombie* newZombie( std::string name)
{
    Zombie* nzombie = new Zombie(name);
    if (nzombie == NULL)
    {
        std::cout << "bad allocation" << std::endl;
        exit(1);
    }
    return nzombie;
}