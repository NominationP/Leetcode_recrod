//
// Created by 张泽翔 on 11/01/2018.
//

#include <iostream>
using namespace std;

class Solution{

public:

    /**
     * v1 : move number
     * con : if number is -number, right move will fix add 1
     * @param number
     * @return
     */
    int numberOf1InBinary_v1(int number){

        int count = 0;

        while(number){
            if(number & 1){
                count++;
            }
            number = number>>1;
        }

        return count;

    }

    /**
     * v2 : move 1
     * @param number
     * @return
     */
    int numberOf1InBinary_v2(int number){

        int count = 0;
        unsigned  flag = 1;


        /**
         * limit : 2^32 times (binary max)
         */
        while(flag){

            if(number & flag){
                count++;
            }

            flag = flag << 1;
        }

        return count;
    }


    /**
     * v3 : (number-1)&number ==> change last right 1 to 0
     *
     * v3_1 : 判断一个整数是不是2的整数次方
     *      如果是,则二进制表示中有且只有一位是1
     *
     * v3_2 : 输入俩个整数M,N 计算需要改变M的二进制表示中的多少位才能得到N
     *      - 求这俩个数的异或(相同为0,不同为1)
     *      - 统计异或结果中1的位置
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


int main(){


    Solution s;
    int re_v1 = s.numberOf1InBinary_v1(9);
    cout<<re_v1<<endl;

    int re_v2 = s.numberOf1InBinary_v2(9);
    cout<<re_v2<<endl;

    int re_v3 = s.numberOf1InBinary_v3(9);
    cout<<re_v3<<endl;

    return 0;
}