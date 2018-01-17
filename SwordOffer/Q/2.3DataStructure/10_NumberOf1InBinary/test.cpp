//
// Created by 张泽翔 on 12/01/2018.
//

#include <iostream>
using namespace std;

class Solution{
public:

    /**
     * v1
     * @param number
     * @return
     */
    int numberOf1InBinary_v1(int number){

        int count = 0;

        while(number){

            if(number&1){
                ++count;
            }
            number = number>>1;
        }
        return count;
    }

    /**
     * v2
     */
    int numberOf1InBinary_v2(int number){

        int count = 0;
        int flag = 1;
        while(flag){
            if(number&flag){
                ++count;
            }

            flag = flag<<1;
        }

        return count;
    }

    /**
     * v3
     */

    int numberOf1InBinary_v3(int number){

        int count = 0;

        while(number){

            ++count;
            number = (number-1)&number;

        }

        return count;
    }
};