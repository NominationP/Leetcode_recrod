#include<iostream>
#include<vector>
#include<string>
#include<stdint.h>
#include<climits>

using namespace std;
/**
 *detail:
 *so stupid , dfs waste lot time
 *use dfs not resolve ...
 *find this sulotion to done ,
 *
 *1 find how many 1 in the map. If without the consideration of surrounding cells, the total perimeter should be the total amount of 1 times 4.
 *2 find how many cell walls that connect with both lands. We need to deduct twice of those lines from total perimeter
 *
 * look clear  , think clear not code first , last do it !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 *
 *
 * do: use dfs do !!!!!!!!!!!!!!!!!1111
 */
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {

        int count =0;
        int re = 0;

        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] == 1){
                    count++;
                    if(i!=0 && grid[i-1][j] == 1) re++;
                    if(j!=0 && grid[i][j-1] == 1) re++;
                }
            }
        }

        int res = count*4-re*2;
        cout<<res;

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

    return 0;
}

