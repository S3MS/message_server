#include "server.h"

#include <iostream>

int main(int argc, char** argv)
{
    server* s = new server();

    s->init();
    s->start();

    return 0;
}