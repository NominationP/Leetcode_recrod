//
// Created by Yibo on 22/03/2018.
//

#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int BinarySearch(vector<int> v, int find){


    int begin = 0;
    int end = v.size();

    while(begin<=end){

        int mid = begin+(end-begin)/2;

        if(v[mid] == find)
            return mid;

        if(v[mid]<find){
            begin = mid+1;
        }else{
            end = mid-1;
        }
    }

    return -1;
}

int main(){
    vector<int> v{1,3,4,4,6,7};
    int res = BinarySearch(v,4);
    cout<<res<<endl;
}

