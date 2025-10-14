#include "Zombie.h"

std::string Zombie :: getname(){return name;}
void Zombie::setname(std::string first) {name = first;}
// Zombie::Zombie(std::string first) { name = first; }
void Zombie::announce() {std::cout << name << ": BraiiiiiiinnnzzzZ..."  << std::endl;}
Zombie::~Zombie(){std::cout << "Zombie destroyed: " << name << std::endl;};