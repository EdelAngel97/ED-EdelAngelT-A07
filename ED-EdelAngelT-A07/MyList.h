#pragma once
#include <iostream>
#include "Node.h"

class MyList {
public:
	Node* first;
	Node* last;
	Node* pointer;

	MyList();
	MyList(int d);
	bool isEmpty();
	void insertFirst(int d);
	void insertLast(int d);
	void deleteFirst();
	void deleteLast();
};
