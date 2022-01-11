/*
 * tree.h
 *
 *  Created on: Jan 7, 2022
 *      Author: fadjaift
 */

#ifndef LIB_TREE_H_
#define LIB_TREE_H_

#include "Algo.h"
#include <iostream>

using namespace std;


class Tree : public Algo{
public:
	Tree();
	virtual ~Tree();
	void test();
};


Tree::Tree() {
	cout << "Create Tree" <<endl;
}

Tree::~Tree() {
	cout << "Remove Tree" <<endl;
}

void Tree::test(){
	cout << "This test has Tree class" <<endl;
}

#endif /* LIB_TREE_H_ */
