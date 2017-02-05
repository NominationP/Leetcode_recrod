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
 *  i&(i-1) drop last 1 ???
 *  i&1 check weather 1 of last byte
 *  i's number of 1 == i/2 number of 1 + (i&1)
 *
 *
 *
 *q:    0 1 0000 0001 0000
 *      1 2 0001 0010 0000
 *      2 3 0010 0101 0000
 *      3 4 0011 0100 0000
 *      4 5 0100 0101 0100
 *      5 6 0101 0110 0100
 *      6 7 0110 0111 0110
 *      7 8 0111 1000 0000
 */
 class Solution {
 public:
     vector<int> countBits(int num) {

        vector<int> res;
        int count = 0;
        for(int i=0; i<=num; i++){

            int tem = i;
            while(tem){
                if(tem&1){
                    count++;
                }
                tem>>=1;
            }
            res.push_back(count);
            count = 0;

        }
        // for(auto i : res){
        //     cout<<i<<endl;
        // }
        return res;
     }

     //一个数 * 2 就是把它的二进制形式全部左移一位，反过来看，一个数的二进制形式除去最后一位之外，其余位包含的1的总数，和其一半（/2）对应的二进制形式中的1的总数是相同的，也就是右移1位对应的结果。另外，最后1位是不是1，可以用i & 1来判断。
     vector<int> countBits1(int num) {

        vector<int> res = vector<int>(num+1,0);

        for(int i=1; i<=num; i++){
            res[i] = res[i>>1] + (i&1);
        }
        // for(auto i : res){
        //     cout<<i<<endl;
        // }
        return res;
     }
 };

int main()
{

    Solution so ;
    // cout<<ee<<endl;

    so.countBits (5);

    return 0;
}

