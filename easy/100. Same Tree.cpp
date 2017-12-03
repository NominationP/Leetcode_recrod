/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//class Solution {
//public:
//    bool isSameTree(TreeNode* p, TreeNode* q) {
//        if (!p || !q) return q == p;
//        return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//    }
//    bool isSameTree2(TreeNode *p, TreeNode *q) {
//        if (p == NULL || q == NULL) return (p == q);
//        return (p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
//    }
//    bool isSameTree1(TreeNode* p, TreeNode* q) {
//        if(!p && !q) return true;
//        if(p && q){
//            if(p->val != q->val){
//                return false;
//            }else{
//                return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
//            }
//        }else{
//            return false;
//        }
//
//    }
//};