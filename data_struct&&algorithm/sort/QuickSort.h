//
// Created by Yibo on 28/01/2018.
//
#include <cstdlib>
#include <exception>
#include <iostream>

using namespace std;

int Partition(int data[], int length, int start, int end);

// Random Partition
int RandomInRange(int min, int max)
{
    int random = rand() % (max - min + 1) + min;
    return random;
}

void Swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int Partition(int data[], int length, int start, int end)
{
    if(data == NULL || length <= 0 || start < 0 || end >= length)
        throw exception();

    int index = RandomInRange(start, end);
    Swap(&data[index], &data[end]);

    int small = start - 1;
    for(index = start; index < end; ++ index)
    {
        if(data[index] < data[end])
        {
            ++ small;
            if(small != index)
                Swap(&data[index], &data[small]);
        }
    }

    ++ small;
    Swap(&data[small], &data[end]);

    return small;
}

void QuickSort(int data[], int length, int start ,int end){
    if(start == end)
        return;

    int index = Partition(data,length,start,end);

    if(index>start)
        QuickSort(data,length,start,index-1);
    if(index<end)
        QuickSort(data,length,index+1,end);
}
//
//int main(){
//    int data[] = {2,4,1,2,3,7,5};
//
//    QuickSort(data,7,0,6);
//
//    for (int i = 0; i < 7; ++i) {
//        cout<<data[i]<<endl;
//    }
//}
