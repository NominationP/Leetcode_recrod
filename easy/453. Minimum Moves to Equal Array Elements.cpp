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

    int minMoves(vector<int>& nums) {

        return accumulate(begin(nums), end(nums), 0) - nums.size() * *min_element(begin(nums), end(nums));
    }


    //it's ok ,but not ugh
    int minMoves2(vector<int>& nums) {


       int count = 0;
       sort(nums.begin(),nums.end());

       for(int i=1; i<nums.size(); i++){

            count += nums[i]-nums[0];
       }


       return count;
    }



    //not work ! time out
     int minMoves1(vector<int>& nums) {


        int count = 0;
        sort(nums.begin(),nums.end());
        int incr_size = nums.size()-1;

        while(*nums.begin() != *(nums.end()-1)){
            count++;
            for(int i=0; i<incr_size; i++){
                nums[i]++;
            }
            sort(nums.begin(),nums.end());
        }

        return count;
     }
 };
int main()
{

    Solution so ;
    // cout<<ee<<endl;
    vector<int> v{1,2};
    cout<<so.minMoves(v);

    return 0;
}
