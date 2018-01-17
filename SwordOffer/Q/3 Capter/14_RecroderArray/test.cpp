//
// Created by Yibo on 16/01/2018.
//

#include <iostream>
using namespace std;

class Solution{
public:
    void RecorderArray(int *pData , unsigned int length , bool (*func)(int)){

        if(pData == NULL || length <= 0)
            return;

        int* begin = pData;
        int* end = begin + length -1;

        while(begin<end){

            while(begin<end && !odds(*begin)){
                begin++;
            }

            while(begin<end && odds(*end)){
                end--;
            }

            if(begin<end){

                int tmp = *begin;
                *begin = *end;
                *end = tmp;
            }


        }

    }

    bool odds(int number){
        return (number & 1) == 0;
    }


    void expandCom(int *pData , unsigned int length){
        RecorderArray(pData,length,odds);
    }
};


int main(){

    int array[10] = {1,2,3,4,5,6,7,8,9,10};

    Solution s;
    s.expandCom(array,10);

    for (int i = 0; i < 10; ++i) {
        cout<<array[i]<<endl;
    }
}