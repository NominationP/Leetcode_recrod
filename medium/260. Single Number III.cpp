#include<iostream>
#include<vector>
#include<string>
#include<stdint.h>
#include<climits>
#include<algorithm>
#include<unordered_map>

//g++ -g -std=c++11 100.\ Same\ Tree.cpp -o demo
//gdb ./demo
using namespace std;
/**
 *
 */
 class Solution {
 public:
 vector<int> singleNumber(vector<int>& nums) {

    vector<int> res;
    int rox = 0;
    for(auto i : nums){
        rox ^= i;
    }
    int lastBit = (rox&(rox-1)^rox);
    cout<<lastBit<<endl;
    // sort(nums.begin(),nums.end());
    // for(int i=0; i<nums.size();){
    //     if(nums[i]^nums[i+1]){
    //         res.push_back(nums[i++]);
    //         if(i==nums.size()-1){
    //             res.push_back(nums[i]);
    //         }
    //     }else{
    //         i+=2;
    //     }
    // }
    // for(auto i:res){
    //     cout<<i<<endl;
    // }
    return res;
    }
 };


int main()
{
    vector<int> v = vector<int>{1,2,2,3,4,3};

    Solution so ;

    so.singleNumber(v);

    return 0;
}

