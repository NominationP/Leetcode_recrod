//
// Created by 张泽翔 on 09/01/2018.
//

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:

    int same(vector<int> v){

        int min = v[0];
        for(int i = 1 ; i < v.size(); i++){
            if(v[i]<v[0]){
                min = v[i];
            }
        }

        return min;
    }


    int minNumberInRotatedArray(vector<int> v , int length){

        if(v.size()<=0 || length<=0){
            throw exception();
        }

        int first = 0;
        int second = length - 1;
        int min_index = first;

        while(v[first]>=v[second]){

            if(second-first == 1){
                min_index = second;
                break;
            }


            min_index = (first+second)/2;


            /** 110111 first == second == mid */
            if(v[first] == v[second] && v[first] == v[min_index]){
                return same(v);
            }


            if(v[min_index]>=v[first]){
                first = min_index;
            }else if(v[min_index]<=v[first]){
                second = min_index;
            }
        }


        return v[min_index];

    }
};


int main(){

    vector<int> v = {2};
    Solution s;
    int min = s.minNumberInRotatedArray(v,1);
    cout<<min<<endl;



    return 0;
}