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
 * recus && unordered_map
 */
class Solution {

    int getSubtreeSum(unordered_map<int,int>& cnt, TreeNode* node){
        if(node == NULL) return 0;
        int sum = node->val;
        sum += getSubtreeSum(cnt,node->left);
        sum += getSubtreeSum(cnt,node->right);
        ++cnt[sum];
        return sum;
    }
public:
    vector<int> findFrequentTreeSum(TreeNode* root) {

        unordered_map<int,int> cnt;
        vector<int> ret;
        int maxFreq = INT_MIN;

        getSubtreeSum(cnt,root);

        for(auto p:cnt){
            if(p.second > maxFreq){
                maxFreq = p.second;
            }
        }
        for(auto p:cnt){
            if(p.second == maxFreq){
                ret.push_back(p.first);
            }
        }

        return ret;
    }
};

/**
 *
 */

class Solution1 {
public:
    vector<int> findFrequentTreeSum(TreeNode* root){
        vector<int> result;
        dfs(root);
        int maxn = 0;
        for(auto it= m.begin(); it!=m.end(); it++)
            maxn = max(maxn,it->second);
        for(auto it=m.begin; it!=m.end(); it++)
            if(it->second == maxn)
                result.push_back(it->first);
        return result;
    }

    void dfs(TreeNode* root){
        if(root == NULL) return;
        if(root->left != NULL){
            dfs(root->left);
            root->val += root->left->val;
        }
        if(root->right != NULL){
            dfs(root->right);
            root->val += root->right->val;
        }
        m[root->val]++;
    }


};


int main()
{
    // vector<int> v = vector<int>{1,2,3,4,5};

    Solution so ;

    so.findFrequentTreeSum();

    return 0;
}

