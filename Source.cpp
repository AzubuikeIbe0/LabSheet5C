#include "Contacts.h"
#include "NodeOfContacts.h"
#include "ListOfContacts.h"

int main()
{

	Contacts C;
	cout << C;

	ListOfContacts L;
	L.insertFront(C);

	cout << L;



	/*
	L.insertFront();
	L.displayList();
	L.deleteFront();
	L.operator<<(ostream & str, const ListOfContacts &mList);
	L.~ListOfContacts();
	*/
	return 0;
}