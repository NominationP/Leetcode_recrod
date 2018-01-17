//
// Created by 张泽翔 on 09/01/2018.
//


/**
 * 1. The frog jumped the steps v1 f(n) = f(n-1) + f(n-2)
 * 2. The frog jumped the steps v2 f(n) = 2^(n-1)
 * 3. fill grid f(n) = f(n-1)+f(n-2)
 */

#include <iostream>
#include <vector>

using namespace std;

class Solustion{
public:
    long long fibonacci_recusive(int n){

        if(n<=0){
            return 0;
        }

        if(n==1) {
            return 1;
        }

        return fibonacci_recusive(n-1)+fibonacci_recusive(n-2);
    }

    long long fibonacci_for(int n){

        vector<int> re = {0,1};
        if(n<2){
            return re[n];
        }

        long long first = re[0];
        long long second = re[1];
        long long res = 0;
        for (int i = 0; i <= n-2; ++i) {
            res = first + second;
            first = second;
            second = res;
        }

        return res;
    }
};

int main(){

    Solustion s;
    long long  re = s.fibonacci_for(6);
    cout<<re<<endl;
    return 0;
}