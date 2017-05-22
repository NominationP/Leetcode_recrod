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
 */
class Solution {
public:
int findPoisonedDuration(vector<int>& timeSeries, int duration) {

    if(timeSeries.empty()) return 0;
    int begin = timeSeries[0];
    int re = 0;
    for(auto t : timeSeries){
        re += t<begin+duration ? t-begin : duration;
        begin = t;
    }

    return re + duration;


    }
};


int main()
{
    vector<int> v = vector<int>{1,3};

    Solution so ;

    cout<<so.findPoisonedDuration(v,4);

    return 0;
}

