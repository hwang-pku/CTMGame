#include <Chunk.h>
class LTM
{
public:
    virtual bool sendChunk(Chunk *) = 0;
    virtual void receiveChunk(Chunk) = 0;
};
class Input : public LTM
{
public:
    bool sendChunk(Chunk *);
    void receiveChunk(Chunk);
};