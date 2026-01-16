#include "replace.hpp"

void replaceStrings(std::string& filename, std::string& s1, std::string& s2)
{
    std::ifstream File1(filename);
    if (!File1)
    {
        std::cerr << "Error: Failed to open input file" << std::endl;
        return;
    }
    std::ofstream File2(filename + ".replace");
    if (!File2)
    {
        std::cerr << "Error: Failed to create output file" << std::endl;
        return;
    }
    std::string line;
    while(getline(File1,line))
    {
        size_t pos;
        while((pos = line.find(s1)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        File2 << line;
        if (!File1.eof())
        File2 << '\n';
    }
    File1.close();
    File2.close();
}