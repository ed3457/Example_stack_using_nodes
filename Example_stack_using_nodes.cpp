// Example_stack_using_nodes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Stack.h"
using namespace std; 

int main()
{
	try {
		Stack st1;

		st1.push(1);
		st1.push(2);
		st1.push(3);
		st1.push(4);
		st1.push(5);
		st1.pop();
		st1.push(6);

		// print all elements of the stack
		while (!st1.isEmpty())
		{
			cout << st1.pop() << endl;
		}

		// print all elements of the stack without losing the elements 
		//Stack temp;
		//int element;
		//while (!st1.isEmpty())
		//{
		//	element = st1.pop();
		//	temp.push(element);
		//	cout << element << endl;
		//}

		//// put the elements back into the stack
		//while (!temp.isEmpty())
		//{
		//	st1.push(temp.pop());
		//}

		// Question: how can we create a duplicate of a stack? 


	}

	catch (int ex)
	{
		switch (ex)
		{
		case 1:
			cout << "Stack Overflow!\n";
			break;
		case 2:
			cout << "Stack Underflow!\n";
			break;
		}

	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
