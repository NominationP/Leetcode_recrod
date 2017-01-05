#include<iostream>
#include<vector>
#include<string>
#include<stdint.h>
#include<climits>

using namespace std;



const int maxn = 100;
bool vst[maxn][maxn];
int map[maxn][maxn];
int dir[4][2] = {0,1,0,-1,1,0,-1,0};

// int count=0;
int connect = 0;

vector<vector<int>> grid{   {0,1,0,0},
                            {1,1,1,0},
                            {0,1,0,0},
                            {1,1,0,0}};



class Solution {
public:


    int dfs(int x, int y,int x_size,int y_size, int count, vector<vector<int>> grid){

        vst[x][y] = 1;


        for(int i=0; i<4; i++){

            // int x = x+dir[i][0];
            // int y = y+dir[i][1];

            if(x+dir[i][0]<0 || x+dir[i][0]>=x_size || y+dir[i][1]<0 || y+dir[i][1]>=y_size){

                count++;
                continue;
            }


            if(grid[x+dir[i][0]][y+dir[i][1]] == 0){

                count++;
                continue;

            }

        }
        return count;
    }

    int islandPerimeter(vector<vector<int>>& grid) {

        int x_size = grid.size();
        int y_size = grid[0].size();
        int count =0;

        for(int i=0; i<x_size; i++){
            for(int j=0; j<y_size; j++){
                if(grid[i][j] == 1){
                    count = dfs(i,j,x_size,y_size,count,grid);
                }
            }
        }

        cout<<count;
    }


};

int main()
{
    vector<vector<int>> grid{   {0,1,0,0},
                                {1,1,1,0},
                                {0,1,0,0},
                                {1,1,0,0}};


    Solution s ;
    // cout<<ee<<endl;

    s.islandPerimeter(grid);

    // cout<<count;

    return 0;
}
