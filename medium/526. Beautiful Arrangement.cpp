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

 class Solution1 {
 public:
     int countArrangement(int N) {
        visit.resize(N+1);
        dfs(N);
        return result;
     }

 private:
    int result = 0;
    vector<bool> visit;

    void dfs(int index){
        if(index == 1){
            result++;
            return ;
        }
        for(int i=1; i<visit.size(); i++){
            if(visit[i] == false && (i % index == 0 || index % i == 0)){
                visit[i] = true;
                dfs(index-1);
                visit[i] = false;
            }
        }
    }
 };

 class Solution {
 public:
     int countArrangement(int N) {
        visit.resize(N+1);
        dfs(N);
        return result;
     }

 private:
    int result = 0;
    vector<bool> visit;

    void dfs(int index){
        if(index == 1){
            result++;
            return ;
        }
        for(int i=1; i<visit.size(); i++)
        {
            if(visit[i] == false && (i % index == 0 || index % i == 0)){
                visit[i] = true;
                dfs(index-1);
                visit[i] = false;
            }
        }
    }
 };


int main()
{
    // vector<int> v = vector<int>{1,2,3,4,5};

    Solution so ;

    int re = so.countArrangement(3);
    cout<<re<<endl;
    return 0;
}
