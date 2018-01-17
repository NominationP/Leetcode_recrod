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
 * find max dup numbers
 *
 * travel once
 * record dup time -> record max number
 *
 */
 class Solution {
 public:
     int findMaxConsecutiveOnes(vector<int>& nums) {

        unordered_map<int,int> m;
        int count = 0;
        int old = 0;
        for(int i=0; i<nums.size(); i++){

            if(nums[i] == 0 && m.empty()){
                continue;
            }
            if(nums[i] == 1 ){
                m[count]++;
            }else{
                old < m[count] ? old=m[count]:old;
                count++;

            }
        }
        old < m[count] ? old=m[count]:old;
        return old;
     }

     int findMaxConsecutiveOnes1(vector<int>& nums) {

        int maxhere = 0;
        int max = 0;
        for(auto i : nums){
            max = std::max(max,maxhere = i == 0 ? 0 : maxhere+1);
        }
        return max;

     }

 };


int main()
{

    Solution so ;

    vector<int> v;
    v.push_back(1);
    // v.push_back(0);
    // v.push_back(1);
    // v.push_back(1);
    // v.push_back(0);
    // v.push_back(1);
    // v.push_back(1);
    // v.push_back(1);
    // v.push_back(0);

    cout<<so.findMaxConsecutiveOnes1(v);

    return 0;
}

