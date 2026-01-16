#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* group_zombie = new Zombie[N];
    if (group_zombie == NULL)
    {
        std::cout << "bad allocation " << std::endl;
        exit (1);
    }
    int i  = 0;
    while (i < N)
    {
        group_zombie[i].setname(name);
        i++;
    }
    return group_zombie;
}