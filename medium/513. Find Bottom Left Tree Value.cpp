#include<iostream>
#include<vector>
#include<string>
#include<stdint.h>
#include<climits>
#include<algorithm>
#include<unordered_map>

//g++ -std=c++11 100.\ Same\ Tree.cpp -o demo

using namespace std;
/**
 *
 */

 /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *
 int val;
 *
 TreeNode *left;
 *
 TreeNode *right;
 *
 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 class Solution {
 public:

 int findBottomLeftValue(TreeNode* root) {
    int deep=0;
    findleft(root,deep);
 }

 int findleft(TreeNode* root, deep){
    if(!root) return 0;
    findleft(root->left, ++deep);
    findleft(root->right,++deep);
    return deep;

 }
 };


int main()
{
    // vector<int> v = vector<int>{1,2,3,4,5};

    Solution so ;

    so.findBottomLeftValue();

    return 0;
}
