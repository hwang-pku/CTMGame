#include <iostream>

class Chunk
{
public:
    int address = 0;
    std::string gist;
    double weight;
    const double intensity() const { return weight; };
    double mood;
    Chunk(int, std::string &, double, double);
    bool operator<(const Chunk &) const;
};