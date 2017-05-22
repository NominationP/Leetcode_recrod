#include<iostream>
#include<vector>
#include<string>
#include<stdint.h>
#include<climits>
#include<algorithm>

using namespace std;
/**
 *q:
 */
class Solution {
public:
    char findTheDifference(string s, string t) {

        s = s+t;
        int re =s[0];
        for(int i=1; i<s.size(); i++){

            char tm = int(s[0])^int(s[i]);
            s[0] = tm;
        }

        cout<<s[0]<<endl;
    }
    char findTheDifference1(string s, string t) {

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        for(int i=0; i<s.size(); i++){
            if(s[i]!=t[i]){
                return t[i];
            }
        }
        return t[t.size()-1];
    }
};

int main()
{

    Solution so ;
    // cout<<ee<<endl;
    string s = "abcd";
    string t = "abecd";
    cout<<so.findTheDifference(s,t);

    return 0;
}

