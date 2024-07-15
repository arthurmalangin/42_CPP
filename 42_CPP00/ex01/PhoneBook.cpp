#include "PhoneBook.hpp"
//std::ends pour aucun retour a la ligne

PhoneBook::PhoneBook(void) {
    this->index = 0;
    std::cout << "Type: ADD, SEARCH or EXIT !" << std::endl; 
}

void PhoneBook::add_contact(std::string firstname, std::string lastname, std::string nickname, std::string phonenumber, std::string secret) {
    if (firstname.empty() || lastname.empty() || nickname.empty() || phonenumber.empty() || secret.empty()) {
        std::cout << "\nCan't register contact, field cannot be empty." << std::endl;
        return ;
    }
    if (this->index > 7) {
        std::cout << "Warning, index overflow, rewrite on first contact !" << std::endl;
        this->index = 0;
    }
    _phonebook[this->index].setFirstName(firstname);
    _phonebook[this->index].setLastName(lastname);
    _phonebook[this->index].setNickName(nickname);
    _phonebook[this->index].setPhone(phonenumber);
    _phonebook[this->index].setSecret(secret);
    this->index++;
}

void PhoneBook::display_all() {
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|     index|First name| Last Name|  NickName|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    for(int i = 0; i < 8; i++) {
        std::string firstName = _phonebook[i].getFirstName();
        std::string lastName = _phonebook[i].getLastName();
        std::string nickName = _phonebook[i].getNickName();
        std::string index = "";

        index += (i + 48);
        firstName = (firstName.size() > 10) ? firstName.substr(0, 9) + "." : firstName;
        lastName = (lastName.size() > 10) ? lastName.substr(0, 9) + "." : lastName;
        nickName = (nickName.size() > 10) ? nickName.substr(0, 9) + "." : nickName;

        firstName = (firstName.size() < 10) ? firstName.insert(0, 10 - firstName.size(), ' ') : firstName;
        lastName = (lastName.size() < 10) ? lastName.insert(0, 10 - lastName.size(), ' ') : lastName;
        nickName = (nickName.size() < 10) ? nickName.insert(0, 10 - nickName.size(), ' ') : nickName;
        index = index.insert(0, 9, ' ');
        std::cout << "|" << index << "|" <<  firstName << "|" << lastName << "|" << nickName << "|" << std::endl;
    }
    std::cout << "---------------------------------------------" << std::endl;
}

void PhoneBook::display(int index) {
    std::cout << "Index: " << index << "\n" << "FirtName: " << _phonebook[index].getFirstName() << std::endl;
    std::cout << "LastName: "<< _phonebook[index].getLastName() << "\n" << "NickName" << _phonebook[index].getNickName() << std::endl;
    std::cout << "PhoneNumber: " << _phonebook[index].getPhone() << "\n" << "Secret: " << _phonebook[index].getSecret() << std::endl;
}