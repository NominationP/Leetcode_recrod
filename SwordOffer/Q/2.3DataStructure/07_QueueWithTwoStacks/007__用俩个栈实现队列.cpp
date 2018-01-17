//
// Created by 张泽翔 on 07/01/2018.
//
#include <iostream>
#include <vector>
#include <stack>

using namespace std;


template<typename T> class CQueue{
public:
    CQueue(void);

    CQueue(const stack<T> &stack1);

    ~CQueue(void);

    void appendTail(const T& node);
    T deleteHead();

private:
    stack<T> stack1;
    stack<T> stack2;
};

template <typename T> CQueue<T>::CQueue(void) {}
template <typename T> CQueue<T>::~CQueue(void) {}


template<typename T> void CQueue<T>::appendTail(const T& element){
    stack1.push(element);
}

template<typename T> T CQueue<T>::deleteHead() {

    if(!stack2.empty()){
        T top = stack2.top();
        stack2.pop();

        return top;
    }else{
        while(!stack1.empty()){

            T top1 = stack1.top();
            stack1.pop();


            stack2.push(top1);
        }

        T top = stack2.top();
        stack2.pop();
        return top;
    }


}


int main(){

    CQueue<int> cqueue;
    cqueue.appendTail(4);
    int i = cqueue.deleteHead();
    cout<<i<<endl;


    return 0;
}






















