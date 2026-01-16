#include "replace.hpp"

int main(int argc, char* argv[]) 
{
    if (argc != 4) 
    {
        std::cerr << "Erreur: <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    std::string filename  = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if (s1.empty()) 
    {
        std::cerr << "Error: Search string s1 is empty" << std::endl;
        return 1;
    }
    replaceStrings(filename , s1, s2);
}