#include<iostream>
#include<vector>
#include<string>
#include<stdint.h>
#include<climits>
#include<algorithm>
#include<unordered_map>

//g++ -g -std=c++11 100.\ Same\ Tree.cpp -o demo
//gdb ./demo
using namespace std;
/**
 *
 */
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<int> dict(256,-1);
        int maxLen = 0 , start = -1;
        for(int i = 0; i != s.length(); i++){
            if(dict[s[i]]>start)
                start = dict[s[i]];
            dict[s[i]] = i;
            maxLen = max(maxLen, i-start);
        }

        return maxLen;
    }
};


int main()
{
    // vector<int> v = vector<int>{1,2,3,4,5};

    	
    Solution so ;

    cout<<so.lengthOfLongestSubstring("abcad");

    return 0;
}

