#pragma once

#include <vector>
#include <string>

namespace blockchain
{
    class Block
    {
        public:
        unsigned long int hash, previousHash, data;
    };


    class Blockchain
    {
    public:
        std::vector<Block> blocks;
        void addNewBlock(std::string data);
        void genesis(std::string data);
    };
}