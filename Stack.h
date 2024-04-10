#pragma once
#include <iostream>
using namespace std;
struct node
{
	int info; // data 

	node* link; // pointer to the next node 

};
class Stack
{
private:
	node* first; // pointer to the first node 
	int count;
public:
	int pop();
	void push(int element);
	int top();
	Stack(); // Constructor 
	
	bool isEmpty();
	
	void initStack();
	~Stack();
	int getCount();
};

