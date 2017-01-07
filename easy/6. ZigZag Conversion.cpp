#include<iostream>
#include<vector>
#include<string>

/**
 * think is ok , but the key is how to complete is , I used to while(for for) to control , up to down
 *
 *   timeout
 *
 * check answer , this is cool , just control begin and end !!!
 *
 * https://discuss.leetcode.com/topic/4502/share-simple-c-solution
 *
 * some tip :
 *     linux compile not show index out of
 *     not to show infinite loop and crash  !!!
 *
 *     string vector
 *
 */
using namespace std;

class Solution {
    public:
        string convert(string  s, int nRows) {


            if(s.length()<=2 || nRows==1){
                cout<<s;
                return s;
            }


            // initial vector
            vector< vector<char> > v;
            for(int i=0; i<nRows; i++){
                v.push_back(vector<char>());
            }

            int row = 0;
            int step = 1;

            for(int j=0; j<s.length(); j++){

                v[row].push_back(s[j]);

                if(row==0){
                    step=1;
                }
                else if(row==nRows-1){
                    step=-1;
                }

                row += step;

            }

            vector<char> vv;

            for (int i=0; i<nRows; i++){
                for(char & n : v[i]){
                    vv.push_back(n);
                }
            }

            return s;

        }
};

int main()
{

    Solution s ;
    // cout<<ee<<endl;

    s.convert("ABC",2);


    return 0;
}

