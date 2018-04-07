//
// Created by Yibo on 2018/4/5.
//

/**
 * 给定一个单链表，判断其中是否有环
 */

#include <algorithm>
#include "../list.h"

using namespace std;

Node* reverseList(Node* head) {

    if(head==NULL || !head->next)
        return head;

    Node* pre = NULL;
    Node* cur = head;
    Node* post = cur->next;

    while(!post){

        cur->next = pre;
        pre = cur;
        cur = post;
        post = post->next;

    }

    cur->next = pre;

    return cur;


}


int main(){

    LinkedList* list = new LinkedList();

    list->push_back(1);
    list->push_back(2);
    list->push_back(2);
    list->push_back(6);
    list->push_back(7);
    list->push_front(4);

    Node* head = reverseList(list->head);

    while(head){
        cout<<head->data<<endl;
        head = head->next;
    }

}


