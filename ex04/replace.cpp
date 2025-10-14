#include "replace.hpp"

void replaceStrings(std::string& filename, std::string& s1, std::string& s2)
{
    ifstream File1(filename);
    if (!File1)
    {
        cerr << "Error: Failed to open input file" << endl;
        return;
    }
    ofstream File2(filename + ".replace");
    if (!File2)
    {
        cerr << "Error: Failed to create output file" << endl;
        return;
    }
    string line;
    while(getline(File1,line))
    {
        size_t position;
        while((position = line.find(s1)) != std::string::npos)
        {
            line.erase(position, s1.length());
            line.insert(position, s2);
            position += s2.length();
        }
        File2 << line;
        if (!File1.eof())
        File2 << '\n';
    }

    File1.close();
    File2.close();
}