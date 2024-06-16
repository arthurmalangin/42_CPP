#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {
    public:
        void setFirstName(std::string firstname);
        std::string getFirstName(void);
        void setLastName(std::string lastname);
        std::string getLastName(void);
        void setNickName(std::string nickname);
        std::string getNickName(void);
        void setPhone(std::string phonenb);
        std::string getPhone(void);
        void setSecret(std::string secret);
        std::string getSecret(void);

    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phonenumber;
        std::string _secret;
};

#endif