//
// Created by Yibo on 2018/4/5.
//

/**
 * 给定一个单链表，判断其中是否有环
 */

#include <algorithm>
#include "../list.h"

using namespace std;

bool CheckCircleList(Node* head){

    Node* slow = head;
    Node* fast = slow->next;

    while(slow != fast){

        if(slow==NULL || fast==NULL){
            return false;
        }

        slow = slow->next;
        fast = slow->next;
    }

    return true;


}


int main(){

    LinkedList* list = new LinkedList();

    list->push_back(1);
    list->push_back(2);
    list->push_back(2);
    list->push_back(6);
    list->push_back(7);
    list->push_front(4);

    cout<<CheckCircleList(list->head);
}


