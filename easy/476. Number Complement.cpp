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
 *
 *  num          = 00000101
    mask         = 11111000
    ~mask & ~num = 00000010

    ~(num ^ mask)  <==> (~num & ~mask)

 */

 class Solution {
 public:
     int findComplement(int num) {

        int mask = ~0;
        while(num & mask){  //caculate numbers of byte
            mask <<= 1;
        }
        return ~(num ^ mask);
     }
 };


int main()
{

    Solution so ;
    // cout<<ee<<endl;

    cout<<so.findComplement(5);

    return 0;
}

