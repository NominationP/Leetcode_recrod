//
// Created by 张泽翔 on 13/01/2018.
//

#include <iostream>
#include "../../../../data_struct&&algorithm/list.h"

using namespace std;


int main(){

    LinkedList *list = new LinkedList;

    list->push_back(1);
    list->push_back(2);
    list->push_back(2);
    list->push_back(6);
    list->push_back(7);

    Node *head = list->head;

    /**get delete node */
    Node *del_node = new Node;
    for (int i = 0; i <= 3; ++i) {
        del_node = head;
        head = head->next;
    }

    list->deleteNodeInList(head,del_node);



    return 0;
}