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
struct Node
{
	int value;
	Node* next;
	Node* sibling;

};


class List {

private:


public:

	Node* gen_list() {

		Node* head = new Node;
		head->value = 1;

		Node* point = new Node;
		point = head;

		for (int i = 2 ; i < 2; i++) {
			Node* pNode = new Node;
			pNode->value = i;

			point->next = pNode;

			point = pNode;
		}
		point = head;
		return point;

	}

	Node* sibling_list(Node* point) {

		Node* head = point;

		while (point) {

			if (point->value == 2) {
				point->sibling = point->next->next;
			}
			if (point->value == 4) {
				point->sibling = head;
			}

			point = point->next;
		}

		return head;
	}

	Node* copy_dup_list(Node* point) {


		Node* head = point;

		while (point) {

			Node* node = new Node;

			node->value = point->value;
			node->next = point->next;
			point->next = node;

			point = node->next;
		}

		return head;

	}

	// Node* copy_sibling_point(Node* point) {

	// 	Node* head = point;

	// 	while (point) {

	// 		if (point->sibling != NULL) {

	// 			point->next->sibling = point->sibling->next;
	// 		}

	// 		point = point->next->next;
	// 	}

	// 	// return head;
	// }

	// Node* split_sibling(Node* point) {

	// 	Node* head = point;
	// 	Node* copy_head = new Node;

	// 	Node* beg = point->next;
	// 	copy_head = beg;

	// 	while (point) {

	// 		if (point->next->next == NULL) {
	// 			point->next = NULL;
	// 			break;			
	// 		}

	// 		point->next = beg->next;
	// 		point = point->next;

	// 		beg->next = point->next;
	// 		beg = beg->next;


	// 	}


	// 	return copy_head;
	// }


	void print_list(Node* head){

		if(head->next->value){
			cout<<head->next;
		}else{
			cout<<"dd";
		}	
		// head = head->next;
		// if(head)
		// cout<<head->value;

		// if(!head) return;

		// while(head){

		// 	cout<<head->value;

		// 	if(head->next){
		// 		head = head->next;
		// 	}else{
		// 	}
		// }


		// cout<<head->value;
		// if(!head->next) return;
		// this->print_list(head->next);
	}

};




int main()
{

	List* list = new List;

	/*get a instance : normal list*/
	Node* point = list->gen_list();

	list->print_list(point);

	/*get a instance : sibling list */
	// Node* head = list->sibling_list(point);

	// /*copy sibling list*/
	// /*first copy duplicate node*/
	// copy_dup_list(head);
	// // // /*second copy sibling point*/
	// copy_sibling_point(head);
	// // // /*third split dup node*/
	// Node* copy_head = split_sibling(head);



	// while (copy_head) {

	// 	if (copy_head->sibling != NULL) {
	// 		cout << copy_head->sibling->value << endl;
	// 	}

	// 	cout << copy_head->value << endl;

	// 	copy_head = copy_head->next;
	// }

	// cout<<"==============="<<endl;

	// while (head) {

	// 	if (head->sibling != NULL) {
	// 		cout << head->sibling->value << endl;
	// 	}

	// 	cout << head->value << endl;

	// 	head = head->next;
	// }


	return 0;
}

