//
// Created by 张泽翔 on 08/01/2018.
//
#include <vector>
#include <iostream>

using namespace std;

class Solution{
public:
    int minNumberInRotatedArray(vector<int> v){

        if(v.size()<=0){
            throw exception();
        }

        int size = v.size();


        int first = 0;
        int end = size-1;
        int mid_index = first;



        while(v[first]>=v[end]){

            if(end-first == 1){
                mid_index = end;
                break;
            }

            mid_index = (end+first)/2;


            if(v[first] == v[end] && v[first] == v[mid_index]){

                for(int i=1; i<v.size(); i++){
                    if(mid_index>v[i]){
                        mid_index = v[i];
                    }
                }

                break;
            }

            if(v[mid_index] >= v[first]){
                first = mid_index;
            }else if (v[mid_index] <= v[end]){
                end = mid_index;
            }
        }

        return v[mid_index];







    }
};

int main(){
    vector<int> v = {3,4,5,6,1,2};
    Solution s;
    int min = s.minNumberInRotatedArray(v);

    cout<<min<<endl;

    return 0;
}