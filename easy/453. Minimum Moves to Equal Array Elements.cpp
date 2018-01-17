#include<iostream>
#include<vector>
#include<string>
#include<stdint.h>
#include<climits>
#include<algorithm>

using namespace std;
/**
 *d: Incrementing all but one is equivalent to decrementing that one. So let's do that instead. How many single-element decrements to make all equal? No point to decrementing below the current minimum, so how many single-element decrements to make all equal to the current minimum? Just take the difference from what's currently there (the sum) to what we want (n times the minimum).
 *
 *size-1 increment === only one decrement ===> all magic image !!!
 */
 class Solution {
 public:

    int minMoves(vector<int>& nums) {
        // cout<<accumulate(begin(nums), end(nums), 0)<<endl;
        // cout<<nums.size()<<endl;
        // cout<<*min_element(begin(nums), end(nums))<<endl;
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
    vector<int> v{2,2,3};
    cout<<so.minMoves(v);

    return 0;
}
