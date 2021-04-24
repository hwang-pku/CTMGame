#include "Chunk.h"

Chunk::Chunk(int address, std::string &gist, double weight, double mood) : address(address), gist(gist), weight(weight), mood(mood) {}
bool Chunk::operator<(const Chunk &tmp) const
{
    return intensity() < tmp.intensity();
}