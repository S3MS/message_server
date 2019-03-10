#include <iostream>
#include <thread>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <unistd.h>

#define MAX_CONNECTION_SIZE 5

typedef struct
{
    int id;
    int sock;
    struct sockaddr* client;
}thread_data;


class server
{
private:
    int sock;
    int PORT;
    static int connection_count;
    
    struct sockaddr_in srv;
    struct sockaddr_in client;

    thread_data* data;
    pthread_t threads[MAX_CONNECTION_SIZE];

    static void *connection_handler(void*);

public:
    server();
    ~server();

    int init();
    int start();
};