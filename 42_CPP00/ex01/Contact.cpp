#include "Contact.hpp"

void Contact::setFirstName(std::string firstname) {
	_firstName = firstname;
}

std::string Contact::getFirstName(void) {
	return (_firstName);
}

void Contact::setLastName(std::string lastname) {
	_lastName = lastname;
}

std::string Contact::getLastName(void) {
	return (_lastName);
}

void Contact::setNickName(std::string nickname) {
	_nickname = nickname;
}

std::string Contact::getNickName(void) {
	return (_nickname);
}

void Contact::setPhone(std::string phonenb) {
	_phonenumber = phonenb;
}

std::string Contact::getPhone(void) {
	return (_phonenumber);
}

void Contact::setSecret(std::string secret) {
	_secret = secret;
}

std::string Contact::getSecret(void) {
	return (_secret);
}