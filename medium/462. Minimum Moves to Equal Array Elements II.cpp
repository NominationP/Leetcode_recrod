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
     int minMoves2(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int sum = 0 ;
        while(i<j){
            sum += nums[j--] - nums[i++];
        }
        return sum;
     }
 };


int main()
{
    vector<int> v = vector<int>{1};

    Solution so ;

    so.minMoves2(v);

    return 0;
}

