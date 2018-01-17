#include<iostream>
#include<vector>
#include<string>
#include<stdint.h>
#include<climits>

using namespace std;
/**
 *
 */
class Solution {
public:
    vector<string> fizzBuzz(int n) {

        vector<string> v;

        int count =0;
        for(int i=1; i<=n; i++){
            count++;
            if(i%3==0 && i%5==0){
                v.push_back("FizzBuzz");
            }else if(i%3==0){
                v.push_back("Fizz");
            }else if(i%5==0){
                v.push_back("Buzz");
            }else{
                v.push_back(std::to_string(i));
            }
        }

        return v;
        // for(auto i : v){
        //     cout<<i<<endl;
        // }

    }
};

int main()
{

    Solution s ;
    // cout<<ee<<endl;

    s.fizzBuzz(1);

    return 0;
}

