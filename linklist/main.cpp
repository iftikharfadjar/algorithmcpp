#include <iostream>
#include "linklist.h"
#include "node.h"

using namespace std;

int main(){
	cout << "Hi World" << endl;
	Linklist l;
	
	
	 // Node* n = new Node(1);
	Node n(2);
	Node n1(4);
	Node n2(5);
	l.append(&n1);
	l.append(&n2);
	l.append(&n);
	l.print();
	return 0;
}
