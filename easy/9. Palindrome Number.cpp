#include<iostream>
#include<vector>
#include<string>
#include<stdint.h>
#include<climits>

using namespace std;

class Solution {
public:

    bool isPalindrome(int x) {

        if(x<0 || (x!=0 && x%10==0))
            return false;
        int sum = 0;
        while(x>sum){
            sum = sum*10+x%10;
            x=x/10;
        }
        return (x==sum) || (x==sum/10);

    }

    bool isPalindrome(int x) {

        if(x>=0 && x<10){
            return true;
        }
        int sum = 0;
        int tem_x = x;
        while(tem_x>0){

            sum = sum*10 + tem_x%10;
            tem_x = tem_x/10;
        }

        if(sum == x){
            return true;
        }else{
            return false;
        }

    }
};

int main()
{

    Solution s ;
    // cout<<ee<<endl;

    cout<<s.isPalindrome(12321);

    return 0;
}