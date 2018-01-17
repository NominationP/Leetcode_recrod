#include<iostream>
#include<vector>
#include<string>
#include<stdint.h>
#include<climits>
#include<algorithm>
#include<unordered_map>
#include <cstdlib>

#include <typeinfo>

#include"tree.h"


//g++ -g -std=c++11 100.\ Same\ Tree.cpp -o demo
//gdb ./demo
using namespace std;
/**
 *
 */
template <class T>
class Solution {

// private:
// 	Node<T> *root;

public:
	void convertNode(Node<T> *pNode, Node<T> **pLastNodeInList) {

		if (!pNode) return;
		Node<T> *pCurrent = pNode;

		if(pCurrent->left != NULL)
			convertNode(pCurrent->left , pLastNodeInList);

		pCurrent->left = *pLastNodeInList;
		if(*pLastNodeInList != NULL){
			(*pLastNodeInList)->right = pCurrent;
		}
		*pLastNodeInList = pCurrent;
		
		if(pCurrent->right != NULL){
			convertNode(pCurrent->right,pLastNodeInList);
		}



	}
};
int main()
{
	// vector<int> v = vector<int>{1,2,3,4,5};

	BST<int> *bst = new BST<int>();
	bst->add(11);
	bst->add(1);
	bst->add(6);
	bst->add(-1);
	bst->add(-10);
	bst->add(100);

	Node<int> *root = bst->root;

	Node<int> *pLastNodeInList = NULL;
	Solution<int> *sol = new Solution<int>();
	sol->convertNode(root,&pLastNodeInList);



}
