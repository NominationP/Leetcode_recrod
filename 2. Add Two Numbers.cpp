#include<stdio.h>
#include<iostream>
/* demo.c:  My first C program on a Linux */

using namespace std;


struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};


int main(void)
{
    ListNode l = ListNode(5);


    cout<<l.next<<endl;

    return 0;
}