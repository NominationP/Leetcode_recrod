#include<iostream>
#include<vector>
#include<string>
#include<stdint.h>
#include<climits>
#include<algorithm>
#include<unordered_map>
using namespace std;
/**
 *q:
 */
 class Solution {
 public:
    bool canconstruct(string ransomnote, string magazine) {
        unordered_map<char,int> map;

        for(int i=0; i<magazine.size(); ++i)
            ++map[magazine[i]];
        for(int j=0; j<ransomnote.size(); ++j)
            if(--map[ransomnote[j]]<0)
                return false;


        return true;


    }

    bool canConstruct3(string ransomNote, string magazine) {
        unordered_map<char, int> map;
        for (int i = 0; i < magazine.size(); ++i)
            ++map[magazine[i]];
        for (int j = 0; j < ransomNote.size(); ++j)
            if (--map[ransomNote[j]] < 0)
                return false;
        return true;
    }


    bool canConstruct1(string ransomNote, string magazine) {

    for(int i=0; i<=magazine.size()-ransomNote.size(); i++){

        if(magazine[i] == ransomNote[0]){

            for(int j=0; j<ransomNote.size(); j++){
                int co = i;
                if(int(ransomNote[j]) == int(magazine[co]-'0')){
                    co++;
                    if(j == ransomNote.size()-1)
                        return true;

                }else{
                    break;
                }
            }


        }

    }

    return false;
    }
 };

int main()
{

    Solution so ;
    // cout<<ee<<endl;
    string s1 = "aa";
    string s2 = "ab";

    cout<<so.canConstruct(s1,s2);

    return 0;
}

