//
// Created by 张泽翔 on 06/01/2018.
//

/**
 * this is simple than last one
 *
 * point : division is import
 *
 * such as :
 * pre : 1, 2, 4, 7, 3, 5, 6, 8
 * in :  4, 7, 2, 1, 5, 3, 8, 6
 *
 * pre-->1 is root, get index in "in"
 *      ---> get "4,7,2" from "in" vector(begin,index)        (---> this is root(1) left children)
 *      ---> get "2,4,7" from "pre" vector(begin+1,index+1)   (---> this is root(1) left children)
 *
 *      ---> get "5,3,8,6" from "in" vector(index+1,end)    (---> this is root(1) right children)
 *      ---> get "3,5,6,8" from "pre" vector(index+1,end)   (---> this is root(1) right children)
 *
 * and recursive this proccess
 *
 */



#include <vector>
#include "../../../../data_struct&&algorithm/tree.h"



class Solution {
public:
    struct node *reConstructBinaryTree(vector<int> pre, vector<int> in)
    {
        if (pre.size() > 0 && in.size() > 0)
        {
//            Btree * tree = new Btree(pre[0]);
//            tree->insert(pre[0]);
//            node* root = tree->getRoot();

            node * root = new node(pre[0]);

            vector<int>::iterator root_position_in_order = find(in.begin(), in.end(), root->value);

            int left_length = root_position_in_order - in.begin();


            root->left = Solution().reConstructBinaryTree(
                    vector<int>(pre.begin() + 1, pre.begin() + left_length + 1),
                    vector<int>(in.begin(), root_position_in_order));
            root->right = Solution().reConstructBinaryTree(
                    vector<int>(pre.begin() + left_length + 1, pre.end()),
                    vector<int>(root_position_in_order + 1, in.end()));
            return root;
        }


        return NULL;
    }


};

int main( )
{


    Btree* btree = new Btree;
    vector<int> pre = { 1, 2, 4, 7, 3, 5, 6, 8 };
    vector<int> in = { 4, 7, 2, 1, 5, 3, 8, 6 };


    Solution solu;
    node *root = solu.reConstructBinaryTree(pre, in);

    btree->inorder_traRecursive_show(root);
//    cout<<root->value<<endl;

    return 0;
}
