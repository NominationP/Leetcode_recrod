//
// Created by 张泽翔 on 12/12/2017.
//

#include<iostream>
#include<vector>
#include<string>
#include<stdint.h>
#include<climits>
#include<algorithm>
#include<unordered_map>
#include "../../../data_struct&&algorithm/list.h"

using namespace std;

int main(){

    LinkedList* list = new LinkedList();
    list->push_back(2);
    list->push_back(3);
    list->push_back(4);
    list->push_back(5);

    list->printListReversingly_Recursively(list->head);

}
