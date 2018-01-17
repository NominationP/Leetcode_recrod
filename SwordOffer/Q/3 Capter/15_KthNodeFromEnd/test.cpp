//
// Created by Yibo on 16/01/2018.
//

#include <iostream>
#include "../../../../data_struct&&algorithm/list.h"

using namespace std;

class Solution{
public:
    Node* KthNodeFromEnd(Node* list, unsigned int k){

        if(list == NULL || k<=0)
            return NULL;



        Node* index = list;


        for (int i = 0; i < k-1; ++i) {
            if(!index->next)
                 return NULL;
            index = index->next;
        }

        while(index->next != NULL){

            list = list->next;
            index = index->next;
        }

        return list;


    }
};


int main(){

    LinkedList *list = new LinkedList;
    list->push_back(1);


    Solution s;
    Node* re = s.KthNodeFromEnd(list->head,1);
    cout<<re->data<<endl;

    return 0;
}