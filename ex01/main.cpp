#include "Zombie.hpp"

int main (void)
{
    Zombie* zombies;
    zombies = zombieHorde(3, "test");
    int i = 0;
    while(i < 3)
    {
        zombies[i].announce();
        i++;
    }
    delete[] zombies;
}