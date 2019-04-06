
#include <iostream>

class user
{
private:
    std::string name;
    std::string surname;
    std::string username;
    std::string email;
    std::string phone;

public:
    user();
    user(std::string, std::string, std::string, std::string, std::string);

    void set_name(const std::string);
    void set_surname(const std::string);
    void set_username(const std::string);
    void set_email(const std::string);
    void set_phone(const std::string);

    std::string get_name();
    std::string get_surname();
    std::string get_username();
    std::string get_email();
    std::string get_phone();
};