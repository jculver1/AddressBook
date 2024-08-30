#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Person {
public:
	Person(const string &lastName, const string &firstName, const string &middleName, const string &phoneNumber, const vector<string> &address);

	string getLastName();
	string getFirstName();
	string getMiddleName();
	string getPhoneNumber();
	vector<string> getAddress();

	string lastName;
	string firstName;
	string middleName;
	string phoneNumber;
	vector<string> address;
};

