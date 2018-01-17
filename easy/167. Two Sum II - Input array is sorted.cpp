#include<iostream>
#include<vector>
#include<string>
#include<stdint.h>
#include<climits>
#include<algorithm>
#include<unordered_map>

//g++ -std=c++11 100.\ Same\ Tree.cpp -o demo

using namespace std;
/**
 *q:
 */
 class Solution {
 public:
     vector<int> twoSum(vector<int>& numbers, int target) {

        unordered_map<int,int> m;
        vector<int> result;

         for(int i=0; i<numbers.size(); i++){

            int orther = target-numbers[i];

            if(m.find(orther) != m.end()){
                result.push_back(m[orther]+1);
                result.push_back(i+1);
                return result;
            }

            m[numbers[i]] = i;

         }

         return result;
     }

     //Without HashMap, just have two pointers, A points to index 0, B points to index len - 1, shrink the scope based on the value and target comparison.


     vector<int> twoSum1(vector<int>& numbers, int target) {

        int i=0;
        int j=numbers.size()-1;
        while(i<j){
            if(numbers[i]+numbers[j] == target){
                vector<int> res{i+1,j+1};
                return res;
            }else if(numbers[i]+numbers[j] > target){
                j--;
            }else{
                i++;
            }
        }
     }
 };


int main()
{

    vector<int> v;
    v.push_back(2);
    v.push_back(7);
    v.push_back(10);
    v.push_back(12);

    vector<int> out;


    Solution so ;
    // cout<<ee<<endl;

    out = so.twoSum1(v,9);

    for(auto i : out){
        cout<<i<<endl;
    }



    return 0;
}

