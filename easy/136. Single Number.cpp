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


    /**
     * hint : xor
     * 1 a ^ a = 0
     * 2 a ^ 0 = a
     * 3 a ^ b ^ b = a
     *
     * @param  nums [description]
     * @return      [description]
     */
    int singleNumber(vector<int>& nums) {

        for(int i = 1; i < nums.size(); ++i) {
            nums[0] ^= nums[i];
        }
        return nums[0];

    }



    int singleNumber2(vector<int>& v) {

        sort(v.begin(),v.end());

        int tem = 0;
        for(int i=0; i<v.size()-1; ){
            if(v[i] == v[i+1]){
                i += 2;
            }else{
                return v[i];
            }
        }

        return v[v.size()-1];
    }
};

int main()
{

    Solution s ;
    // cout<<ee<<endl;
    vector<int> v{2,2,1,1,4};
    cout<<s.singleNumber(v);

    return 0;
}
