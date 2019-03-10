#include "server.h"

server::server()
{
    server::PORT = 8888;
    server::connection_count = 0;
    server::data = new thread_data[500];
}

server::~server()
{

}

int server::init()
{
    if((server::sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        perror("Socket");
        return -1;
        //LOG
    }

    server::srv.sin_family = AF_INET;
    server::srv.sin_addr.s_addr = INADDR_ANY;
    server::srv.sin_port = htons(server::PORT);
}

int server::start()
{
    int new_sock;

    if(bind(server::sock, (struct sockaddr*)&(server::srv), sizeof(server::srv)))
    {
        perror("Bind");
        return -1;
        //LOG
    }

    if(listen(server::sock, 50) < 0)
    {
        perror("Listen");
        return -2;
        //LOG        
    }

    int size = sizeof(struct sockaddr_in);
    while((new_sock = accept(server::sock, (struct sockaddr*)&(server::client), (socklen_t*)&size)))
    {
        if(++(server::connection_count) >= MAX_CONNECTION_SIZE)
        {
            connection_count--;
            continue;
        }
        
        server::data[connection_count - 1].id = server::connection_count;
        server::data[connection_count - 1].client = (struct sockaddr*)&(server::client);
        server::data[connection_count - 1].sock = new_sock;

        if(pthread_create(&(server::threads[server::connection_count - 1]), NULL, server::connection_handler, (void*)&(server::data[server::connection_count - 1])) < 0)
        {
            perror("pthread");
            return -1;
        }
    }
}

void* server::connection_handler(void *__data)
{
    char buffer[500];

    thread_data data = *(thread_data*)__data;

    std::cout<<data.id<<" Connected..."<<std::endl;
    
    read(data.sock,  buffer, 500);
    std::cout<<buffer<<std::endl;
    
    close(data.sock);
}