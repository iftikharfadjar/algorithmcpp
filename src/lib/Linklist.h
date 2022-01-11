/*
 * Linklist.h
 *
 *  Created on: Jan 7, 2022
 *      Author: fadjaift
 */

#ifndef LIB_LINKLIST_H_
#define LIB_LINKLIST_H_

#include <iostream>
#include "Algo.h"
using namespace std;

typedef int dataNode;

struct node {
	dataNode data;
	node *next;
};

class Linklist : public Algo {
public:
	Linklist();
	virtual ~Linklist();

	void add(dataNode x);
	bool remove(dataNode x);
	bool isEmpty() const;

	void test();

	friend ostream& operator<< (ostream& , const Linklist&);

private:
	node *head; //head of list

};

Linklist::Linklist() : head(nullptr){
	cout << "node created" << endl;

}

Linklist::~Linklist() {
	while(head!=nullptr){
		node *hold = head->next;
		delete head;
		head = hold;
	}

	cout << "node removed" << endl;
}

void Linklist::add(dataNode x) {
	node *newPtr = new node;
	newPtr->data = x;
	newPtr->next = head;
	head = newPtr;
}

bool Linklist::remove(dataNode x){
	if(head == nullptr){
		return false;
	}

	if(head->data == x){
		node  *hold = head->next;
		delete head;
		head = hold;
		return true;
	}
	//so list not empty and not first node to be deleted
	node *cursor = head;
	while(cursor->next != nullptr && cursor->next->data != x){
		cursor = cursor->next;

	}

	if(cursor->next == nullptr){
		return false;
	}
	else{
		node *hold = cursor->next->next;
		delete (cursor->next);
		cursor->next = hold;
		return true;
	}
}

// accessor methods:
bool Linklist::isEmpty() const //return whether the list is empty
{
	return (head==nullptr);
}

void Linklist::test(){
	cout << "this test has Linklist class" << endl;
}

ostream& operator<< (ostream& out, const Linklist& other){
	for(node *cursor = other.head ; cursor; cursor=cursor->next)
		out<< cursor->data <<" ";

	out << endl;
	return out;
}



#endif /* LIB_LINKLIST_H_ */
