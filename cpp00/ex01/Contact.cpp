#include "Contact.hpp"
#include <iostream>

Contact::Contact() {}

Contact::~Contact() {}

void Contact::setFirstName(const std::string &str)
{
    _first_name = str;
}

void Contact::setLastName(const std::string &str)
{
    _last_name = str;
}

void Contact::setNickname(const std::string &str)
{
    _nickname = str;
}

void Contact::setPhoneNumber(const std::string &str)
{
    _phone_number = str;
}
void Contact::setDarkestSecret(const std::string &str)
{
    _darkest_secret = str;
}

const std::string &Contact::getFirstName(void) const
{
    return _first_name;
}

const std::string &Contact::getLastName(void) const
{
    return _last_name;
}

const std::string &Contact::getNickname(void) const
{
    return _nickname;
}

const std::string &Contact::getPhoneNumber(void) const
{
    return _phone_number;
}

const std::string &Contact::getDarkestSecret(void) const
{
    return _darkest_secret;
}
