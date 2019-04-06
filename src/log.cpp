#include "log.h"

Log::Log()
{
    Log::log_level = Log::INFO;
}

void Log::set_loglevel(int level)
{
    Log::log_level = level;
}

void Log::info(const std::string& message)
{
    if(Log::log_level >= Log::INFO)
    {
        std::cout<<"\033[1;32m";
        std::cout<<"[INFO] "<<message<<" at "<<Log::get_current_time()<<std::endl;
        std::cout<<"\033[0m";
    }
}

void Log::warn(const std::string& message)
{
    if(Log::log_level >= Log::WARNING)
    {
        std::cout<<"\033[1;33m";
        std::cout<<"[WARNING] "<<message<<" at "<<Log::get_current_time()<<std::endl;
        std::cout<<"\033[0m";
    }
}

void Log::error(const std::string& message)
{
    if(Log::log_level >= Log::ERROR)
    {
        std::cout<<"\033[1;31m";
        std::cout<<"[ERROR] "<<message<<": "<<strerror(errno)<<" at "<<Log::get_current_time()<<std::endl;
        std::cout<<"\033[0m";
    }
}

std::string Log::get_current_time()
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

Log::~Log()
{

}