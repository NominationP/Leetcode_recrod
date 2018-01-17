//
// Created by 张泽翔 on 14/01/2018.
//

#include <iostream>
#include "../../../../data_struct&&algorithm/list.h"

using namespace std;

void LinkedList::deleteNodeTest(Node** headPoint, Node* del_node){

    if(!head || !del_node){
        return ;
    }

    /**
     *
     */
    if(del_node->next != NULL){

        Node* node = new Node;
        node = del_node->next;

        del_node->data = node->data;
        del_node->next = node->next;

        delete node;
        node = NULL;
    }
    /**
     * just one node in list
     */
    else if(*headPoint == del_node){

        delete del_node;
        del_node = NULL;
        *headPoint = NULL;
    }
    /**
     * del_node is tail in list
     */
    else{

        Node* head = *headPoint;
        while(head->next != del_node){

            head = head->next;

        }
        head->next = NULL;
        delete del_node;
        del_node = NULL;

    }




}


int main(){

    LinkedList* list = new LinkedList;
    list->push_back(1);
    list->push_back(2);
    list->push_back(3);
    list->push_back(4);
    list->push_back(5);

    Node* head = list->head;
    Node* del_node = new Node;
    for (int i = 0; i < 3; ++i) {
        del_node = head->next;
    }

    list->deleteNodeTest(&head,del_node);
    list->print();

    return 0;
}

