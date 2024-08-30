#include "AddressBook.h"
#include "Person.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

//void AddressBook::addPerson(const Person &person) {
//	addressBook.push_back(person);
//}
//

void AddressBook::displayAll() {
	for (int i = 0; i < addressBook.size(); i++) {
		cout << "Last name: " << addressBook[i].getLastName() << endl;
		cout << "First name: " << addressBook[i].getFirstName() << endl;
		cout << "Middle name: " << addressBook[i].getMiddleName() << endl;
		cout << "Phone number: " << addressBook[i].getPhoneNumber() << endl;
		cout << "Address: ";
		vector<string> address = addressBook[i].getAddress();
		for (int j = 0; j < address.size(); j++) {
			cout << address[j] << endl;
		}
		cout << endl;
	}
}

void AddressBook::addPerson() {
	string lastName;
	string firstName;
	string middleName;
	string phoneNumber;
	vector<string> address;
	cout << "Enter last name: ";
	cin >> lastName;
	cout << "Enter first name: ";
	cin >> firstName;
	cout << "Enter middle name: ";
	cin >> middleName;
	cout << "Enter phone number: ";
	cin >> phoneNumber;
	cout << "Enter address: ";
	string temp;
	cin.ignore();
	getline(cin, temp);
	address.push_back(temp);
	Person p(lastName, firstName, middleName, phoneNumber, address);
	addressBook.push_back(p);
}

void AddressBook::deletePerson() {
	string lastName;
	string firstName;
	cout << endl;
	cout << "Enter last name: ";
	cin >> lastName;
	cout << "Enter first name: ";
	cin >> firstName;
	for (int i = 0; i < addressBook.size(); i++) {
		if (addressBook[i].getLastName() == lastName && addressBook[i].getFirstName() == firstName) {
			addressBook.erase(addressBook.begin() + i);
			cout << "Person deleted." << endl;
			return;
		}
	}
	cout << "Person not found." << endl;
}

void AddressBook::editPerson() {
	cout << endl;
	cout << "edit person ";
	string lastName;
	string firstName;
	cout << "Enter last name: ";
	cin >> lastName;
	cout << "Enter first name: ";
	cin >> firstName;
	for (int i = 0; i < addressBook.size(); i++) {
		if (addressBook[i].getLastName() == lastName && addressBook[i].getFirstName() == firstName) {
			cout << "Enter new last name: ";
			cin >> lastName;
			cout << "Enter new first name: ";
			cin >> firstName;
			cout << "Enter new middle name: ";
			string middleName;
			cin >> middleName;
			cout << "Enter new phone number: ";
			string phoneNumber;
			cin >> phoneNumber;
			cout << "Enter new address: ";
			vector<string> address;
			string temp;
			cin.ignore();
			getline(cin, temp);
			address.push_back(temp);
			Person p(lastName, firstName, middleName, phoneNumber, address);
			addressBook[i] = p;
			cout << "Person edited." << endl;
			return;
		}
	}
	cout << "Person not found." << endl;
}


