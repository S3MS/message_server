#include "log.h"

log::log()
{
    log::log_level = log::INFO;
}

void log::set_loglevel(int level)
{
    log::log_level = level;
}

void log::info(const std::string& message)
{
    if(log::log_level >= log::INFO)
    {
        std::cout<<"\033[1;32m";
        std::cout<<"[INFO] "<<message<<" at "<<log::get_current_time()<<std::endl;
        std::cout<<"\033[0m";
    }
}

void log::warn(const std::string& message)
{
    if(log::log_level >= log::WARNING)
    {
        std::cout<<"\033[1;33m";
        std::cout<<"[WARNING] "<<message<<" at "<<log::get_current_time()<<std::endl;
        std::cout<<"\033[0m";
    }
}

void log::error(const std::string& message)
{
    if(log::log_level >= log::ERROR)
    {
        std::cout<<"\033[1;31m";
        std::cout<<"[ERROR] "<<message<<": "<<strerror(errno)<<" at "<<log::get_current_time()<<std::endl;
        std::cout<<"\033[0m";
    }
}

std::string log::get_current_time()
{

    char __date[15];
    char __time[15];
    char temp[50];

  	time_t now;
	now = time(NULL);
	
	strftime(__date, 10, "%d/%m/%y", localtime(&now));
	strftime(__time, 10, "%T", localtime(&now));

    sprintf(temp, "[%s %s]", __date, __time);

    std::string time(temp);

    return time;

}

log::~log()
{

}