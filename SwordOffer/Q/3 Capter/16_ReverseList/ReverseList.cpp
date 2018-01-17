//
// Created by Yibo on 17/01/2018.
//
#include <iostream>
#include "../../../../data_struct&&algorithm/list.h"

using namespace std;

class Solution{
public:
    Node* ReverseList(Node* pHead){


        Node* pReversedHead = NULL;
        Node* pNode = pHead;
        Node* pPrev = NULL;
        while(pNode != NULL)
        {
            Node* pNext = pNode->next;

            if(pNext == NULL)
                pReversedHead = pNode;

            pNode->next = pPrev;

            pPrev = pNode;
            pNode = pNext;
        }

        return pReversedHead;



    }
};

int main(){

    LinkedList* list = new LinkedList;

    list->push_back(1);
    list->push_back(2);
    list->push_back(3);
    list->push_back(4);
    list->push_back(5);
    list->push_back(6);

    Solution s;
    Node* head = s.ReverseList(list->head);

    while(head){

        cout<<head->data<<endl;

        if(!head->next){
            break;
        }

        head = head->next;
    }
}


