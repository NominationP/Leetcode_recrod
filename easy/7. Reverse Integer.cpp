#include<iostream>
#include<vector>
#include<string>
#include<math.h>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while (x) {
            int temp = ans * 10 + x % 10;
            if (temp / 10 != ans)
                return 0;
            ans = temp;
            x /= 10;
        }
        return ans;
    }

    

    
    // int reverse2(int x) {

    //     string s;

    //     if(x<0){
    //         s.append("-");
    //     }


    //     int tep=abs(x);
    //     x = abs(x);
    //     tep = abs(tep);
    //     while(x != 0){

    //         tep = x%10;
    //         x = x/10;
    //         s.append(to_string(tep));

    //     }

    //     for (int i = 0; i < s.length(); i++)
    //         {
    //             s[i] = s.at(i) - '0';
    //         }

    //     cout<<StringToInt(s);
    //     return 0;

    // }
};

int main()
{

    Solution s ;
    // cout<<ee<<endl;

    cout<<s.reverse(123);

    return 0;
}
