#include "Zombie.hpp"
int main(void)
{
    randomChump("Zombie1");//stack

    Zombie* aa = newZombie("Zombie1");//heap
    aa->announce();
    delete aa;

    return 0;
}