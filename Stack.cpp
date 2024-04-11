#include "Stack.h"

int Stack::pop()
{
	// validation 
	if (count == 0)
	{
		throw 1;
	}
	int returnedData=first->info; 
	// 1. point to the first node 
	node* current = first;

	// 2. change the first pointer to the next node
	first = first->link;

	//3. delete the first node
	delete current;
	//4. change the count 
	count--;
	return returnedData;
}

void Stack::push(int element)
{
	// 1. create a node 
	node* newNode = new node();
	newNode->info = element;

	// 2. have the link for the new node pointing to what the first pointer is pointing to 
	newNode->link = first;
	// 3. have the first pointer pointing to the new node
	first = newNode;
	// 4. increment the count 
	count++;
}

int Stack::top()
{
	if (isEmpty())
		throw 1;
	return first->info;
}

Stack::Stack()
{
	count = 0;
	first = NULL;
}

bool Stack::isEmpty()
{
	return (count==0);
}

void Stack::initStack()
{
	while (!isEmpty())
	pop();
}

Stack::~Stack()
{
	initStack();
}

int Stack::getCount()
{
	return count;
}
