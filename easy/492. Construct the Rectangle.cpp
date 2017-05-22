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
    vector<int> constructRectangle(int area) {

        vector<int> v;
        float s = sqrt(area);
        if (fabsf(roundf(s) - s) <= 0.00001f) {
            //int
            v.push_back(s);
            v.push_back(s);

            return v;
        } else {
            //float
            for(int i=s; i>0; --i){

                if(area%i == 0){

                    int half = area/i;
                    int tem;
                    i>half ? :tem = i; i=half; half=tem;
                    v.push_back(i);
                    v.push_back(half);
                    return v;

                }
            }
        }
    }

};

int main()
{
    vector<int> v;

    Solution so ;
    // cout<<ee<<endl;

    v= so.constructRectangle(2);

    for(auto i : v){
        cout<<i<<endl;
    }

    return 0;
}

