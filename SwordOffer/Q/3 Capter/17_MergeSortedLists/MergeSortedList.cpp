//
// Created by Yibo on 17/01/2018.
//

#include <iostream>
#include "../../../../data_struct&&algorithm/list.h"

using namespace std;

class Solution {
public:
    Node* Merge(Node* head1, Node* head2){

        if(head1 == NULL){
            return head2;
        }else if(head2 == NULL){
            return head1;
        }

        Node* mergeHead = NULL;

        if(head1->data < head2->data){

            mergeHead = head1;
            mergeHead->next = Merge(head1->next,head2);
        }else{

            mergeHead = head2;
            mergeHead->next = Merge(head1,head2->next);
        }

        return mergeHead;
    }
};

int main(){

    LinkedList* list1 = new LinkedList;

    LinkedList* list2 = new LinkedList;

    list1->push_back(1);
    list1->push_back(3);
    list1->push_back(5);
    list1->push_back(7);

    list2->push_back(2);
    list2->push_back(4);
    list2->push_back(6);
    list2->push_back(8);

    Solution s;
    Node* mhead = s.Merge(list1->head,list2->head);

    while(mhead){
        cout<<mhead->data<<endl;
        mhead = mhead->next;
    }
}