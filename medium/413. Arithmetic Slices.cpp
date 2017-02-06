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

    //first think : find how many Arithmetic and caculate each one
    //change:
    //just from 1 to n accumulative (if qualified) until not ok , back 1

    int numberOfArithmeticSlices(vector<int>& A) {

        int count = 0;
        int result = 0 ;
        for(int i=2; i<A.size(); i++){
            if(A[i]-A[i-1] == A[i-1]-A[i-2]){
                count++;
                result += count;
            }else{
                count=0;
            }
        }

        return result;
    }

     int numberOfArithmeticSlices(vector<int>& A) {

        if(A.size()<2){
            return 0;
        }

        double old = A[1]-A[0];
        int count = 1;
        vector<int> re;
        int result = 0;
        for(int i=2; i<A.size(); i++){

            if(A[i]-A[i-1] == old){
                count++;
            }else{

                if(count>=2){
                    re.push_back(++count);
                }

                count=1;
                old = A[i]-A[i-1];
            }
        }

        if(count>=2){
            re.push_back(++count);
        }

        if(re.empty()){
            return 0;
        }
        for(auto i : re){
            for(int j=1; j<=i-2; j++){
                result += j;
            }
        }

        return result;
     }
 };


int main()
{
    vector<int> v = vector<int>{1,2,3,4};

    Solution so ;

    cout<<so.numberOfArithmeticSlices(v);

    return 0;
}

