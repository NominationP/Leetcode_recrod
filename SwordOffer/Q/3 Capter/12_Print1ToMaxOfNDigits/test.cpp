//
// Created by 张泽翔 on 14/01/2018.
//

#include <iostream>
using namespace std;

class Solution{
public:
    void Print1ToMaxOfNDigits(int n){

        if(n<=0)
            return;

        char* number = new char[n+1];
        memset(number,'0',n);
        number[n+1] = '\0';

        while(!incrementNumber(number)){

            printNumber(number);
            cout<<endl;
        }

        delete[] number;

    }


    bool incrementNumber(char* number){

        bool flag = false;
        int carray = 0;
        int length = strlen(number);

        for (int i = length-1; i >= 0 ; --i) {

            int sum = number[i] - '0' + carray;
            if( i == length-1 ){
                sum++;
            }

            if(sum>=10){

                if(i == 0)
                    flag = true;
                else{
                    sum -= 10;
                    carray = 1;
                    number[i] = '0' + sum;
                }
            }else{
                number[i] = sum + '0';
                break;
            }


        }

        return flag;



    }

    void printNumber(char* number){

        bool is0 = true;
        int length = strlen(number);

        for (int i = 0; i < length; ++i) {

            if(is0 && number[i] != '0'){
                is0 = false;
            }

            if(!is0){
                cout<<number[i];
            }
        }
    }
};


int main(){

    Solution s;
    s.Print1ToMaxOfNDigits(3);

    return 0;
}