#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
     Zombie* nzombie = new Zombie[N];
    if (nzombie == NULL)
    {
        std::cout << "bad allocation " << std::endl;
        exit (1);
    }
    int i  = 0;
    while (i < N)
    {
        nzombie[i].setname(name);
        i++;
    }
    return nzombie;
}