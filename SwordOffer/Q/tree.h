#include<iostream>
#include<vector>
#include<string>
#include<stdint.h>
#include<climits>
#include<algorithm>
#include<unordered_map>

//g++ -g -std=c++11 100.\ Same\ Tree.cpp -o demo
//gdb ./demo
using namespace std;
/**
 *
 */
template <class T>
struct Node
{
	int value;
	Node* left;
	Node* right;

	Node(T val) {
		this->value = val;
	}

	Node(T val, Node<T> left , Node<T> right) {
		this->value = val;
		this->left = left;
		this->right = right;
	}
};

template <class T>
class BST {

public:
	

	Node<T> *root;


private:
	void addHelper(Node<T> *root , T val) {
		if (root->value > val) {
			if (!root->left) {
				root->left = new Node<T>(val);
			} else {
				addHelper(root->left, val);
			}
		} else {
			if (!root->right) {
				root->right = new Node<T>(val);
			} else {
				addHelper(root->right, val);
			}
		}
	}

	/*inorder traversal*/
	void printHelper(Node<T> * root) {
		if (!root) return ;
		printHelper(root->left);
		cout << root->value << " ";
		printHelper(root->right);
	}

	/*preorder traversal*/
	void prePrintHelper(Node<T> * root) {
		if (!root) return;
		cout << root->value << " ";
		prePrintHelper(root->left);
		prePrintHelper(root->right);

	}

	/*postorder traversal*/
	void postPrintHelper(Node<T> * root) {
		if (!root) return;
		postPrintHelper(root->left);
		postPrintHelper(root->right);
		cout << root->value << " ";
	}

	int nodesCountHelper(Node<T> * root) {
		if (!root) return 0;
		else return 1 + nodesCountHelper(root->left) + nodesCountHelper(root->right);
	}

	int heightHelper(Node<T> * root) {
		if (!root) return 0;
		else return 1 + max(heightHelper(root->left), heightHelper(root->right));
	}

	void printMaxPathHelper(Node<T> *root) {
		if (!root) return;
		cout << root->value << " ";
		if (heightHelper(root->left) > heightHelper(root->right)) {
			printMaxPathHelper(root->left);
		} else {
			printMaxPathHelper(root->right);
		}
	}

	bool deleteValueHelper(Node<T>* parent, Node<T>* current, T value) {
		if (!current) return false;
		if (current->value == value) {
			if (current->left == NULL || current->right == NULL) {
				Node<T>* temp = current->left;
				if (current->right) temp = current->right;

				if (parent) {
					if (parent->left == current) {
						parent->left = temp;
					} else {
						parent->right = temp;
					}
				} else {
					this->root = temp;
				}
			} else {
				Node<T>* validSubs = current->right;
				while (validSubs->left) {
					validSubs = validSubs->left;
				}
				T temp = current->value;
				current->value = validSubs->value;
				validSubs->value = temp;
				return deleteValueHelper(current, current->right, temp);
			}
			delete current;
			return true;
		}
		return deleteValueHelper(current, current->left , value);
		return deleteValueHelper(current, current->right , value);
	}



public:
	void add(T val) {
		if (root) {
			this->addHelper(root, val);
		} else {
			root = new Node<T>(val);
		}
	}
	/*inorder*/
	void print() {
		printHelper(this->root);
	}

	/*prepost*/
	void prePrint(){
		prePrintHelper(this->root);
	}

	/*postorder*/
	void postPrint() {
		postPrintHelper(this->root);
	}


	int nodesCount() {
		return nodesCountHelper(root);
	}

	int height() {
		return heightHelper(this->root);
	}

	void printMaxPath() {
		printMaxPathHelper(this->root);
	}

	bool deleteValue(T value) {
		return this->deleteValueHelper(NULL, this->root, value);
	}
};


// int main()
// {

// 	BST<int> *bst = new BST<int>();
// 	bst->add(11);
// 	bst->add(1);
// 	bst->add(6);
// 	bst->add(-1);
// 	bst->add(-10);
// 	bst->add(100);

// 	/*inorder*/
// 	bst->print();
// 	// /*preorder*/
// 	// bst->prePrint();
// 	// /*postorder*/
// 	// bst->postPrint();
// 	return 0;
	


// }
