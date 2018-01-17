//
// Created by 张泽翔 on 13/01/2018.
//

#include <iostream>
using namespace std;

class Solution{
public:
    bool flag = false;
public:

    /**
     * v1
     * @param base
     * @param exponent
     * @return
     */
    double powerWithabsExponent_v1(double base , unsigned int exponent) {

        double result = 1;
        for (int i = 1; i <= exponent; ++i) {
            result *= base;
        }

        return result;
    }

    /**
     * v2
     */
    double powerWithabsExponent_v2(double base, unsigned int exponent){

        if(exponent == 0)
            return 1;
        if(exponent == 1)
            return base;

        double result = powerWithabsExponent_v2(base,exponent>>1);
        result *= result;
        if(exponent & 0x1 == 1){
            result *= base;
        }

        return result;

    }

    double power(double base, int exponent){

        if(equal(base,0.0) && exponent == 0 ){
            flag = true;
            return 0;
        }

        unsigned int absExponent = (unsigned int)exponent;
        if(exponent<0){
            absExponent = (unsigned int)(-exponent);
        }

        double result = powerWithabsExponent_v2(base , absExponent);

        if(exponent<0){
            result = 1.0/result;
        }

        return result;

    }


    bool equal(double num1, double num2){

        if(num1-num2>-0.0000001 && num1-num2<0.0000001){
            return true;
        }else{
            return false;
        }
    }

};

int main(){

    Solution s;
    double r = s.power(2,2);
    cout<<r<<endl;
    return 0;
}