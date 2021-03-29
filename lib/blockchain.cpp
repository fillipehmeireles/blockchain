#include "../include/blockchain.h"
#include "../include/hashnodes.h"
#include <string>

void blockchain::Blockchain::addNewBlock(std::string data){
    Block newBlock;
    std::string newHash = std::to_string(blocks[blocks.size() -1].hash) + data;

    newBlock.data = HashNodes::hashly(data);
    newBlock.hash = HashNodes::hashly(newHash);
    newBlock.previousHash = blocks[blocks.size() -1].hash;

    blocks.push_back(newBlock);
}

void blockchain::Blockchain::genesis(std::string data)
{
    Block firstBlock;

    firstBlock.data = HashNodes::hashly(data);
    firstBlock.hash = 0;
    firstBlock.previousHash = 0;

    blocks.push_back(firstBlock);
}