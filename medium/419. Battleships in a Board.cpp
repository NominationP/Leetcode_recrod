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
 * clear what mean
 * ensure left-above not "X" ==> count++
 */
 class Solution {
 public:
     int countBattleships(vector<vector<char>>& board) {
         int count=0;
         int size_i = board.size();
         int size_j = board[0].size();
         for(int i=0; i<size_i; i++) {
             for(int j=0; j<size_j; j++){
                 if(board[i][j] == '.') continue;
                 if(i>0 && board[i-1][j]=='X') continue;
                 if(j>0 && board[i][j-1]=='X') continue;
                 count++;
             }
         }

         return count;
     }
 };

int main()
{

    Solution so ;
    // cout<<ee<<endl;

    so.countBattleships();

    return 0;
}

