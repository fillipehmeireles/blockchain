#include "../include/hashnodes.h"
#include <string>



unsigned long int HashNodes::hashly(std::string data)
{
    std::hash<std::string> hasher;

    return hasher(data);
}