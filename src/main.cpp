#include "server.h"

#include <iostream>

int main(int argc, char** argv)
{
    std::cout<<"Hello World"<<std::endl;
    server* s = new server();

    s->init();
    s->start();
    
    return 0;
}