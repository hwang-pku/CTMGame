#include <iostream>

class Chunk{
    public:
        int address=0;
        std::string gist;
        double weight;
        double intensity;
        double mood;
        Chunk(int, std::string &, double, double, double);
};