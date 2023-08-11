#ifndef NODE
#define NODE

#include <iostream>

using namespace std;

class Node {

private:
	int data;
	Node *next;
	Node *prev;
	
public:
	Node(int d){
		data = d;
		next = nullptr;
		prev = nullptr;
		cout << "hi node "<< d << endl;
	}
	
	int getData(){
		return this->data;
	}
	
	Node* getNext(){
		return this->next;
	}
	
	void setNext(Node *n){
		this->next = n;
	}
	
	Node* getPrev(){
		return this->prev;
	}
	
	void setPrev(Node *n){
		this->prev = n;
	}

};


#endif