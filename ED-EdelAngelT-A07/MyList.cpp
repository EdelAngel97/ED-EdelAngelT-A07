#include <iostream>
#include "MyList.h"
#include "Node.h"

MyList::MyList() {
	first = nullptr;
	last = nullptr;
	pointer = nullptr;
}

MyList::MyList(int d) {
	Node* node = new Node(d);
	first = node;
	last = node;
	node->next = nullptr;
}

bool MyList::isEmpty() {
	return first == nullptr;
}

void MyList::insertFirst(int n) {
	Node* node = new Node(n);
	if (isEmpty()) {
		first = node;
		last = node;
		node->next = nullptr;
	}
	else {
		node->next = first;
		first = node;
	}

}

void MyList::insertLast(int n) {
	Node* node = new Node(n);
	if (isEmpty()) {           
		first = node;
		last = node;
		node->next = nullptr;
	}
	else {
		last->next = node;
		last = node;
	}
}

void MyList::deleteFirst() {
	if (!isEmpty()) {
		if (first->next == nullptr) {
			first = nullptr;
			last = nullptr;
		}
		else {
			first = first->next;
		}
	}
}

void MyList::deleteLast() {
	if (isEmpty()) {
		if (first == last)
			first = last = nullptr;
	}
	else {
		pointer = first;
		while (pointer->next != last) {
			pointer = pointer->next;
		}
		last = pointer;
		last->next = nullptr;
		pointer = nullptr;
	}
}
