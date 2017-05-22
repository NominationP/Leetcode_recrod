#include<iostream>
#include<vector>
#include<string>
#include<stdint.h>
#include<climits>
#include<algorithm>
#include<unordered_map>

//g++ -g -std=c++11 100.\ Same\ Tree.cpp -o demo
//gdb ./demo
using namespace std;
/**
 *
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
    	ListNode preHead(0) , *p = &preHead;
        int extra = 0;
        while(l1 || l2 || extra ){

        	int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + extra;
        	extra = sum/10;
        	p->next = new ListNode(sum%10);
        	p = p->next;
        	l1 = l1 ? l1->next : l1;
        	l2 = l2 ? l2->next : l2;
        }

        return preHead.next;
    }
};

int main()
{
    // vector<int> v = vector<int>{1,2,3,4,5};

    Solution so ;

    so.addTwoNumbers();

    return 0;
}

