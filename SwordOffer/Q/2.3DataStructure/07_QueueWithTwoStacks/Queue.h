//
// Created by 张泽翔 on 07/01/2018.
//

#ifndef LEETCODE_RECROD_QUEUE_H
#define LEETCODE_RECROD_QUEUE_H

#endif //LEETCODE_RECROD_QUEUE_H


#include <stack>
#include <exception>

using namespace std;

template <typename T> class CQueue
{
public:
    CQueue(void);
    ~CQueue(void);

    // 在队列末尾添加一个结点
    void appendTail(const T& node);

    // 删除队列的头结点
    T deleteHead();

private:
    stack<T> stack1;
    stack<T> stack2;
};

template <typename T> CQueue<T>::CQueue(void)
{
}

template <typename T> CQueue<T>::~CQueue(void)
{
}

template<typename T> void CQueue<T>::appendTail(const T& element)
{
    stack1.push(element);
}

template<typename T> T CQueue<T>::deleteHead()
{
    if(stack2.size()<= 0)
    {
        while(stack1.size()>0)
        {
            /**
             * Hi~ Here "&" is used to declare a reference of the variable stored in stack1.top().
             * Using reference won't create new variable and hence safe space.
             * Not using "&" is OK, but using it is better.
             * See more on "https://www.hermetic.ch/cfunlib/ast_amp2.htm".
             */
            T& data = stack1.top();
            stack1.pop();
            stack2.push(data);
        }
    }

    if(stack2.size() == 0)
        throw exception();

    T head = stack2.top();
    stack2.pop();

    return head;



}