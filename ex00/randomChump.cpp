#include "Zombie.h"
void randomChump( std::string name )
{
    Zombie* aa = newZombie(name);
    aa->announce();
    delete aa; 
}