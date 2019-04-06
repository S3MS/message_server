#include <iostream>
#include <string.h>
#include <time.h>
#include <errno.h>

class Log
{
private:
    int log_level;

    std::string get_current_time();

public:
    const int INFO = 2;
    const int WARNING = 1;
    const int ERROR = 0;

    Log();
    ~Log();

    void set_loglevel(int);

    void info(const std::string&);
    void warn(const std::string&);
    void error(const std::string&);

};