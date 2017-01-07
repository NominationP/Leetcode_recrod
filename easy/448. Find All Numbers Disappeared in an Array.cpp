#include<iostream>
#include<vector>
#include<string>
#include<stdint.h>
#include<climits>
#include<algorithm>


using namespace std;
/**
 * this question spend me much time
 *
 * pro 1 : think is import ,
 * pro 2 : clear think first
 * pro 3 : not to read code to clear think
 *
 * think: 1 Traversing first find each num correct situation , change the situation -
 *        2 Traversing sencod if this is + , explan this situation no num , push_back this situation
 */
 class Solution {
 public:
     vector<int> findDisappearedNumbers(vector<int>& nums) {

        for(int i=0; i<nums.size(); i++){

            int tem = abs(nums[i])-1;
            nums[tem] = nums[tem]>0?-nums[tem]:nums[tem];

        }

        vector<int> re;
        for(int i=0; i<nums.size(); i++){

            if(nums[i]>0){
                re.push_back(i+1);
            }
        }

        return re;
        // for(auto i : re){

        //     cout<<i<<endl;
        // }
     }
 };

int main()
{
    vector<int> v{2,1,2,4};

    Solution s ;

    s.findDisappearedNumbers(v);

    return 0;
}

