//
// Created by 张泽翔 on 12/01/2018.
//

#include <iostream>
using namespace std;

class Solution{
public:
    bool g_InvalidInput = false;
//    bool equal(double num1, double num2);
//    double PowerWithUnsignedExponent(double base, unsigned int exponent);
public:
    double Power(double base, int exponet){
           g_InvalidInput = false;

        if(equal(base,0.0) && exponet < 0){
            g_InvalidInput = true;
            return 0.0;
        }

        unsigned int absExpoent = (unsigned int)(exponet);
        if(exponet < 0){
            absExpoent = (unsigned int)(-exponet);
        }

        double result = PowerWithUnsignedExponent(base,absExpoent);
        if(exponet < 0){
            result = 1.0 / result;
        }

        return result;
    }

    /**
     * v1
     */
//    double  PowePowerWithUnsignedExponent(double base, unsigned int exponent){
//        double result = 1.0;
//
//        for (int i = 1; i <= exponent; ++i) {
//            result *= base;
//        }
//
//        return result;
//    }

    /**
     * v2
     */
    double PowerWithUnsignedExponent(double base, unsigned int exponent){
        if(exponent == 0)
            return 1;
        if(exponent == 1)
            return base;

        double result = PowerWithUnsignedExponent(base,exponent>>1);
        result *= result;
        if((exponent & 0x1) == 1)
            result *= base;

        return result;
    }

    bool equal(double num1, double num2){
        if((num1-num2 > -0.0000001) && (num1-num2 < 0.0000001)){
            return true;
        }else{
            return false;
        };
    }

};

int main(){

    Solution s;
    double re = s.Power(2,32);
    cout<<re<<endl;
    return 0;
}