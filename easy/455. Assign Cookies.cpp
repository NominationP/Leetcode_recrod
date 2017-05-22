#include<iostream>
#include<vector>
#include<string>
#include<stdint.h>
#include<climits>
#include<algorithm>

using namespace std;
/**
 *d: think complex because greed ...
 */
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        if(s.size()==0){
            return 0;
        }

        int count=0;
        for(int i=0; count<g.size() && i<s.size(); i++){
            if(g[count]<=s[i]){
                count++;
            }
        }

        return count;
    }
};

int main()
{

    Solution so ;

    vector<int> g{1,2};
    vector<int> s{1,2,3};

    cout<<so.findContentChildren(g,s);

    return 0;
}

