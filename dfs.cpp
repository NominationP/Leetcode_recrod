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

int count=1;

vector<vector<int>> grid{   {0,1,0,0},
                            {1,1,1,0},
                            {0,1,0,0},
                            {1,1,0,0}};



class Solution {
public:
    bool check(int x, int y) {

        if(x<0 || y<0 || x>3 || y>3){
            return 0;
        }


        if(grid[x][y] && vst[x][y]!=1 ){
            count++;
            return 1;
        }else{
            return 0;
        }
    }

    void dfs(int x, int y){

        vst[x][y] = 1;

        if(map[x][y] == 1){

        }

        for(int i=0; i<4; i++){

            if(check(x+dir[i][0],y+dir[i][1])){

                dfs(x+dir[i][0],y+dir[i][1]);
            }
        }
        return;
    }


};

int main()
{


    Solution s ;
    // cout<<ee<<endl;

    s.dfs(0,0);

    cout<<count;

    return 0;
}
