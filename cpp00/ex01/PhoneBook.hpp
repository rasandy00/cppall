#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
    private:
        static const int MAX_CONTACTS = 8;
        Contact _contacts[MAX_CONTACTS];
        int _numContacts;
        int _oldestIndex;


    public:
        PhoneBook(void);
        ~PhoneBook(void);

        void addContact(void);
        void searchContacts(void) const;
};

#endif