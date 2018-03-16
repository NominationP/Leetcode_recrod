//
// Created by Yibo on 16/03/2018.
//

#include <algorithm>
#include <vector>
#include <iostream>

#ifndef LEETCODE_RECROD_BUBBLESORT_H
#define LEETCODE_RECROD_BUBBLESORT_H

#endif //LEETCODE_RECROD_BUBBLESORT_H

using namespace std;

vector<int> BubbleSort(vector<int> v){

    if(v.empty()){
        return v;
    }

    bool flag = true;
    int length = v.size();

    for (int i = 0; (i < length-1) && flag; ++i) {
        flag = false;
        for (int j = 0; j < length-i-1; ++j) {
            if(v[j]>v[j+1]){
                flag = true;
                swap(v[j],v[j+1]);
            }
        }

    }

    for (int k = 0; k < v.size(); ++k) {
        cout<<v[k]<<endl;
    }

}

int main(){
    vector<int> v{5,3,4,2,1};
    BubbleSort(v);
    return 0;
}