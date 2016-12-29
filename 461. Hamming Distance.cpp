#include<iostream>
#include<vector>
#include<string>
#include<stdint.h>
#include<climits>

using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int z = x^y;
        int count = 0;
        while(z>0){
            if(z%2 != 0){
                count++;
            }
            z=z>>1;
        }
        return count;
    }
};

int main()
{

    Solution s ;
    // cout<<ee<<endl;

    cout<<s.hammingDistance(1,3);


    return 0;
}

