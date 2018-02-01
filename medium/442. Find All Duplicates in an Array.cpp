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
    vector<int> findDuplicates(vector<int>& nums) {

        vector<int> res;
        for(auto abs(i) : nums)
        {
            if((nums[i-1] *= -1) > 0)
            {
                res.push_back(abs(i)) ;
            }

        }


        // for(auto i: res ){
        //     cout<<i<<endl;
        // }
        return res;
    }



    /*me*/
     vector<int> findDuplicates1(vector<int>& nums) {

        vector<int> res;
        unordered_map<int,int> m;
        for(auto i : nums){
            m[i]++;
        }
        for(auto i : m){

            /*time limit exceeded*/
            // if(i.second == 1){
            //     nums.erase(remove(nums.begin(),nums.end(),i.first),nums.end());
            // }else{
            //     auto first_index = find(nums.begin(),nums.end(),i.first);
            //     nums.erase(first_index);
            // }

            if(i.second == 2){
                res.push_back(i.first);
            }
        }

        // for(auto i : nums){
        //     cout<<i<<endl;
        // }

        return res;
     }

 };


int main()
{
    vector<int> v = vector<int>{1,2,1,3,4,5};

    Solution so ;

    so.findDuplicates(v);

    return 0;
}
