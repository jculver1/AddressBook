#pragma once
#include <iostream>
#include <vector>
#include "Person.h"

class AddressBook {

	public:

	vector<Person> addressBook;
	void displayAll();
	void addPerson();
	void deletePerson();
	void editPerson();
	//void searchPerson();
	//void displayPerson();
};

