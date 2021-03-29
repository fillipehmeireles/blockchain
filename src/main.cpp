#include <iostream>
#include <string>

#include "../include/blockchain.h"
#include "../include/hashnodes.h"

int main()
{
    blockchain::Blockchain chain;

    chain.genesis("genesis");

    chain.addNewBlock("Fillipe");
    chain.addNewBlock("Henrique");

    for (int i = 0; i < chain.blocks.size(); i++)
    {
        std::cout << "Hash: " << chain.blocks[i].hash << std::endl;
        std::cout << "Data: " << chain.blocks[i].data << std::endl;
        std::cout << "PrevHash: " << chain.blocks[i].previousHash << std::endl;
    }
    
    return 0;
}