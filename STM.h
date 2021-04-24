#include "LTM.h"
#include "Chunk.h"
#include <vector>

class STM{
    public:
        std::vector<LTM> longTermMemories;
        LTM upTree();
        void broadCast(const Chunk &);
};