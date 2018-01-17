//
// Created by 张泽翔 on 08/01/2018.
//

#include <vector>
#include "../../../../data_struct&&algorithm/tree.h"

using namespace std;

class Solution {
public:
     node* constructBinaryTree(vector<int> pre, vector<int> in){

        if(pre.size()>0 && in.size()>0){

            int root_value = pre[0];
            vector<int>::iterator root_ite = find(in.begin(),in.end(),root_value);
            int root_index = root_ite - in.begin();

            node* root = new node(root_value);

            root->left = constructBinaryTree(vector<int>(pre.begin()+1,pre.begin()+root_index+1),vector<int>(in.begin(),in.begin()+root_index));
            root->right = constructBinaryTree(vector<int>(pre.begin()+root_index+1,pre.end()), vector<int>(in.begin()+root_index+1,in.end()));

            return root;
        }

        return NULL;
    }
};

int main (){

    vector<int> pre = { 1, 2, 4, 7, 3, 5, 6, 8 };
    vector<int> in = { 4, 7, 2, 1, 5, 3, 8, 6 };


    Solution solu;
    node *root = solu.constructBinaryTree(pre, in);
    Btree* btree = new Btree;
    btree->inorder_traRecursive_show(root);
}