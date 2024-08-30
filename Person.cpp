#include "Person.h"
#include <iostream>
#include <vector>
using namespace std;

Person::Person(const string &lastName, const string &firstName, const string &middleName, const string &phoneNumber, const vector<string> &address): lastName(lastName), firstName(firstName), middleName(middleName), phoneNumber(phoneNumber), address(address){}

string Person::getFirstName() {
	return firstName;
}

string Person::getLastName() {
	return lastName;
}

string Person::getMiddleName() {
	return middleName;
}

string Person::getPhoneNumber() {
	return phoneNumber;
}

vector<string> Person::getAddress() {
	return address;
}