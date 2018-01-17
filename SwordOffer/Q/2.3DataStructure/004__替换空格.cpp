//
// Created by 张泽翔 on 05/12/2017.
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
 * 请实现一个函数，将一个字符串中的空格替换成"%20"。 例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。
 *
 * key : start from end && know first ' ' numbers
 *
 * P48 remote questions
 */
using namespace std;
/**
 *
 */
class Solution {
public:
    void solution(char *s){

        /**
         * check s
         */
        if(s == NULL) return;

        /**
         * find how long of result
         */
        int originSize = 0;
        int i = 0;
        int count = 0;
        while(s[i] != '\0'){
            ++originSize;
            if(s[i] == ' '){
                count++;
            }
            i++;
        }
        int resSize = originSize + 2*count;

        /**
         * begin
         */
        int indexOrigin = originSize;
        int indexNew = resSize;

        for (int j = originSize; j >= 0 ;) {

            if(s[j] != ' '){

                s[indexNew--] = s[j--];

            }else{

                s[indexNew--] = '0';
                s[indexNew--] = '2';
                s[indexNew--] = '%';

                j--;
            }
        }


        return;
    }

};

int main()
{
    // vector<int> v = vector<int>{1,2,3,4,5};

    Solution so ;

//    string s = "We are happy.";
    char s[20] = "We are happy.";

    so.solution(s);

    cout<<s;


    return 0;
}

