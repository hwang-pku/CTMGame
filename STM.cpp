#include "STM.h"
#include <cstdlib>

LTM STM::upTree(){
    Chunk chunk=Chunk(-1, "", 0, 0), tmp;
    double psum=0.0;//a common technique to pick randomly from elements
    size_t LTMsize=longTermMemories.size();
    for(size_t i=0;i<LTMsize;i++)
        if(longTermMemories[i].sendChunk(&tmp))//here we suppose we have an additive intensity function
            chunk=std::rand()%((int)((psum+=tmp.intensity())*1000))<(int)tmp.intensity()*1000 ? tmp : chunk;
    return q.top();
}
void STM::broadCast(const LTM & chunk){
    size_t LTMsize=longTermMemories.size();
    for(size_t i=0;i<LTMsize;i++)
        longTermMemories[i].receiveChunk(chunk);
}