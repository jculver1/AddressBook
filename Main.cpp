#include "AddressBook.h"
#include "Person.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

	AddressBook addressBook;

	//addressBook.addPerson(Person("Smith", "John", "Earl", "123-456-7890", { "123 Main St." }));
	//addressBook.addPerson(Person("Doe", "Jane", "M.", "123-456-7890", { "123 Main St." }));
	addressBook.addPerson();
	addressBook.addPerson();
	addressBook.addPerson();
	addressBook.displayAll();
	addressBook.editPerson();
	addressBook.deletePerson();
	addressBook.displayAll();


}