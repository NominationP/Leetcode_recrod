//
// Created by 张泽翔 on 03/12/2017.
//

#include<iostream>
#include<vector>
#include<string>
#include<stdint.h>
#include<climits>
#include<algorithm>
#include<unordered_map>

//g++ -g -std=c++11 100.\ Same\ Tree.cpp -o demo
//gdb ./demo

/**
 * 在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
 *
 * key : start from right-top
 */
using namespace std;
/**
 *
 */
class Solution {
public:
    bool solution(vector<vector<int>> v,int number){
        int line = 0;
        for (int i = v[line].size()-1; i >= 0 && line < v.size();) {

//            cout<<v[line][i]<<endl;

            if(number == v[line][i]) return true;

            if(number > v[line][i]){
                line++;
            }else{
                i--;
            }
        }
        return false;
    }

    bool is_number(const std::string& s)
    {
        return !s.empty() && std::find_if(s.begin(),
                                          s.end(), [](char c) { return !std::isdigit(c); }) == s.end();
    }
};

int main()
{
    // vector<int> v = vector<int>{1,2,3,4,5};

    Solution so ;
    int number;
    cout<<"input find number:";

    int n;
//    while(true){
//        cin >> n;
//        if (!cin) {
//            cout<<"no "<<endl;
//        }else{
//            cout<<"yes "<<endl;
//            break;
//        }
//    }

cin>>number;
    vector<vector<int>> twoDim =  {{1,2,8,9},
                                   {2,4,9,12},
                                   {4,7,10,13},
                                   {6,8,11,16}
    };
    if(so.solution(twoDim,number)){
        cout<<"find "<<number;
    }else{
        cout<<"not find "<<number;
    }



    return 0;
}

