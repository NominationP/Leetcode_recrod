#include<iostream>
#include<vector>
#include<string>
#include<stdint.h>
#include<climits>
#include<algorithm>

using namespace std;
/**
 *q:
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> hash;
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            int numberToFind = target - nums[i];

            if(hash.find(numberToFind) != hash.end()){
                result.push_back(hash[numberToFind]+1);
                result.push_back(i+1);
                return result;

            }

            hash[nums[i]] = i;
        }

        return result;
    }
    vector<int> twoSum1(vector<int>& nums, int target) {

        vector<int> v; f
        or(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }

            }
        }

        return v;

    }
};

int main()
{

    Solution so ;
    // cout<<ee<<endl;

    so.twoSum();

    return 0;
}
