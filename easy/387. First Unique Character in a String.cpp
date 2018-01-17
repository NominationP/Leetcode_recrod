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
 *q:
 */
 class Solution {
 public:
     int firstUniqChar(string s) {
        unordered_map <char, int> m;
        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
        }
        for(int i=0; i<s.size(); i++){
            if(m[s[i]]==1){
                return i;
            }
        }

        return -1;

     }
 };

int main()
{

    Solution so ;
    string s="lolve";

    cout<<so.firstUniqChar(s);

    return 0;
}

