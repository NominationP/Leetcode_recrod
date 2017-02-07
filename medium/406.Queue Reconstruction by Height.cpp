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
 * push_back push_front
 */
 class Solution {
 public:
 vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {

    vector<pair<int,int>> re;
    sort(people.begin(),people.end(),[](pair<int,int>x,pair<int,int>y){
        if(x.second<y.second) return true;
        if(x.second>y.second) return false;
        return x.first < y.first;
    });
    if(people.size()<=2) return people;

    re.push_back(people[0]);
    re.push_back(people[1]);

    for(int i=2; i<people.size(); i++){

        int count = people[i].second;

        for(auto j=re.begin(); j!=re.end();j++){
            // cout<<(*j).first<<endl;
            if(people[i].first <= (*j).first){
                count--;
            }
            if(count == -1){
                re.insert(j,people[i]);
                break;
            }
            if(j==re.end()-1){
                re.insert(j+1,people[i]);
                break;
            }
        }
    }

    // for(auto i : re){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    return re;

 }
 };

int main()
{
    vector<pair<int,int>> v = vector<pair<int,int>>{make_pair(7,0),make_pair(4,4),make_pair(7,1),make_pair(5,0),make_pair(6,1),make_pair(5,2)};
    Solution so ;

    so.reconstructQueue(v);

    return 0;
}

