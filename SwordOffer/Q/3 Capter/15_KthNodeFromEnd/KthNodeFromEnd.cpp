//
// Created by 张泽翔 on 14/01/2018.
//

#include <iostream>
#include "../../../../data_struct&&algorithm/list.h"

/**
 * two point
 *
 * connect question:
 * 1. find mid node in list (behind point 2 step/per )
 * 2. find if is a circle list (behind point 2 ste[/per, if chase first point : yes)
 */

using namespace std;

class Solution{
public:
    Node* KthNodeFromEnd(Node* pListHead, unsigned int k){

        if(pListHead == NULL || k == 0){
            return NULL;
        }

        Node* first = pListHead;
        Node* second = pListHead;

        for (int i = 1; i < k; ++i) {
            if(second->next != NULL){
                second = second->next;
            }else{
                return NULL;
            }
        }

        while(second->next != NULL){
            first = first->next;
            second = second->next;
        }

        return first;

    }

};


int main(){

    LinkedList* list = new LinkedList;

    list->push_back(1);
//    list->push_back(2);
//    list->push_back(3);
//    list->push_back(4);
//    list->push_back(5);



    Solution s;
    Node* re = s.KthNodeFromEnd(list->head,1);
    cout<<re->data;
    return 0;
}