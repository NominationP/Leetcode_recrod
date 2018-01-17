//
// Created by 张泽翔 on 07/01/2018.
//

#include <stack>
#include <iostream>

using namespace std;

template <typename T> class CQueue {

public:
//    CQueue();
//    ~CQueue();

    void appendTail(const T& element);
    T deteleHead();

private:
    stack<T> stack1;
    stack<T> stack2;

};

template <typename T> void CQueue<T>::appendTail(const T &element) {
    stack1.push(element);
}

template <typename T> T CQueue<T>::deteleHead() {

    if(stack2.size()<=0){
        while(stack1.size()>0){

            T top = stack1.top();
            stack1.pop();

            stack2.push(top);
        }
    }

    if(stack2.size()<=0){
        throw exception();
    }

    T head = stack2.top();
    stack2.pop();

    return head;


}


int main(){

    CQueue<int> cqueue;
    cqueue.appendTail(3);
    int i = cqueue.deteleHead();
    cout<<i<<endl;
}