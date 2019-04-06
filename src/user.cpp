#include "user.h"

user::user()
{

}

user::user(std::string name, std::string surname, std::string username, std::string email, std::string phone)
{
    user::name = name;
    user::surname = surname;
    user::username = username;
    user::email = email;
    user::phone = phone;
}

void user::set_name(const std::string name)
{
    user::name = name;
}

void user::set_surname(const std::string surname)
{
    user::surname = surname;
}

void user::set_username(const std::string username)
{
    user::username = username;
}

void user::set_email(const std::string email)
{
    user::email = email;
}

void user::set_phone(const std::string phone)
{
    user::phone = phone;
}

std::string user::get_name()
{
    return user::name;
}

std::string user::get_surname()
{
    return user::surname;
}

std::string user::get_username()
{
    return user::username;
}
std::string user::get_email()
{
    return user::email;
}

std::string user::get_phone()
{
    return user::phone;
}