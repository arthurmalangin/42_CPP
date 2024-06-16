#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook {
    public:
        PhoneBook(void);
        void add_contact(std::string firstname, std::string lastname, std::string nickname, std::string phonenumber, std::string secret);
        void display_all();
        void display(int index);
    private:
        int index;
        Contact _phonebook[8];
};

#endif