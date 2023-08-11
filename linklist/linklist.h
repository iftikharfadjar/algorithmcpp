#ifndef LINKLIST
#define LINKLIST

#include <iostream>
#include "node.h"

using namespace std;

class Linklist {
	int size = 0;
	Node *head;
	Node *tail;
	
	
	public:
		// void create();
		Linklist();
		void append(Node* n);
		void print();
};

// void Linklist::create(){
// 	cout << "linklist has been created" << endl;
// }

Linklist::Linklist(){
	this->head = nullptr;
	this->tail = nullptr;
	cout << "linklist has been created" << endl;
}

void Linklist::append(Node *n){
	 if(!Linklist::head){
		 Linklist::head = n;
		 Linklist::tail = n;
		 cout << "linklist has a new head" << endl;
	 }else{
		Linklist::tail->setNext(n);
		n->setPrev(Linklist::tail);		
		Linklist::tail = n;

		cout << "linklist append a new tail" << endl; 
	 }
	Linklist::size += 1;
}

void Linklist::print(){
	Node *temp = head;
	Node *next;
	while(temp){
		cout << "data = " << temp->getData() << endl; 
		temp = temp->getNext();
	}
	
	
}


#endif /* UNIT_TEST_UNITTEST_H_ */
