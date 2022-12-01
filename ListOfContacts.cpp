#include "ListOfContacts.h"
#include "ListOfContacts.h"
#include "Contacts.h"



ListOfContacts::ListOfContacts()
{
	head = nullptr;
}

bool ListOfContacts::insertFront(Contacts newContact)
{
	// STEP 1
	NodeOfContacts* newNode = new NodeOfContacts(); // Create a new NodeOfContacts

	// STEP 2
	newNode->theContact = newContact; // Assign a contact data

	// STEP 3
	newNode->next = head; // Make the next node of the newNode as head

	// STEP 4
	head = newNode; // Set newNode as head
}



void ListOfContacts::displayList()
{

	NodeOfContacts* temp = head;
	if (head != nullptr)
	{
		while (temp != nullptr)
		{
			std::cout << temp->theContact << endl;
			temp = temp->next;
		}
	}

}




Contacts ListOfContacts::deleteFront()
{
	// STEP 1
	if (head == nullptr) { // Check if there is not node
		return;
	}

	// STEP 2
	NodeOfContacts* temp = head; // Create a pointer to the head

	// STEP 3
	head = head->next; // Move the head pointer to the next node

	// STEP 4
	delete temp; // Delete the first node

	// STEP 5
	return temp->theContact; // Return the value of the deleted node
}


ListOfContacts::~ListOfContacts()
{
	while (head) // While the list is not empty
	{

		NodeOfContacts* temp = head; //Set a temporary pointer to point to the first item on the list

		head = head->next; // Move the head pointer to the next node in the list

		delete temp; // Delete the first node, ie the one the temp pointer is pointed to

	} // End while
}

ostream& operator<<(ostream& str, const ListOfContacts& myList)
{

	str << myList.head;
	return str;

}


bool ListOfContacts::insertBack(string s, int n)
{
	NodeOfContacts *newNode = new NodeOfContacts;
	NodeOfContacts* nodePtr = head;

	newNode->next = nullptr;
	newNode->theContact.name = s;
	newNode->theContact.number = n;

	if (head != nullptr)
	{
		while (nodePtr->next != nullptr)
		{
			nodePtr = nodePtr->next;
		}
		nodePtr->next = newNode;
	}
	else
	{
		head = newNode;
	}
}

bool ListOfContacts::deleteBack()
{
	NodeOfContacts* temp = new NodeOfContacts;
	NodeOfContacts* nodePtr = nullptr;

	if (head != nullptr)
	{
		while (nodePtr->next != nullptr)
		{
			nodePtr = nodePtr->next;
			temp = nodePtr;
		}

		delete temp;

		cout << temp->theContact << " has been deleted!" << endl;
	}
	else
	{
		delete head;

		cout << head->theContact << " has been deleted!" << endl;
	}

	return true;
}

Contacts ListOfContacts::deleteContact(string nameToDelete)
{
	NodeOfContacts* delPtr = nullptr;
	NodeOfContacts* temp = head;
	NodeOfContacts* nodePtr = head;


	while (nodePtr != nullptr && nodePtr->theContact.name != nameToDelete)
	{
		temp = nodePtr;
	}

	{
		nodePtr = nodePtr->next;
		temp = nodePtr;
	}
	
}

bool ListOfContacts::findContact(string nameToFind)
{

}

bool ListOfContacts::isEmpty()
{

}


ListOfContacts::ListOfContacts(const ListOfContacts &p1)
{
	name = p1.name;
	number = p1.number;

}

ostream& operator<<(ostream& str, const ListOfContacts& myList)
{

	str << myList.head;
	return str;

}