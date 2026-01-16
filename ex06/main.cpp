#include "Harl.hpp"

int main(int argc, char **argv) 
{
    if (argc != 2) 
    {
        std::cerr << "args incorect" << std::endl;
        return 1;
    }
    Harl harl;
    harl.FolterComplain(argv[1]);

}