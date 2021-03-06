#include<iostream>
#include<vector>
#include<string>
#include<stdint.h>
#include<climits>
#include<algorithm>
#include<unordered_map>

//g++ -std=c++11 100.\ Same\ Tree.cpp -o demo

using namespace std;


class Solution {

    int getSubtreeSum(unordered_map<int,int>& cnt, TreeNode* node){

        if(!root) return 0;
        node->val += getSubtreeSum(cnt,node->left);
        node->val += getSubtreeSum(cnt,node->right);

        cnt[node->val]++;
    }
public:
    vector<int> findFrequentTreeSum(TreeNode* root) {

        unordered_map<int,int> cnt;
        vector<int> ret;
        int maxFreq = INT_MIN;

        getSubtreeSum(cnt,root);

        for(auto i : cnt){
            if(i.second > maxFreq){
                maxFreq = i.second;
            }
        }

        for(auto i : cnt){
            if(i.second == maxFreq){
                ret.push_back(i.first);
            }
        }

        return ret;
    }
};


/**
 * recus && unordered_map
 */
class Solution0 {

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


class Solution2{
private:
    unordered_map<int,int> m;
    int maxCnt = 0;
    int getSum(TreeNode* root){
        if(!root) return 0;
        int sum = root->val + getSum(root->left) + getSum(root->right);
        m[sum]++;
        maxCnt = max(maxCnt,m[sum]);
        return sum;
    }

public:
    vector<int> findFrequentTreeSum(TreeNode* root){
        getSum(root);
        vector<int> ans;
        for(auto p : m){
            if(p.second == maxCnt) ans.push_back(p.first);

        }
        return ans;
    }
};





int main()
{
    // vector<int> v = vector<int>{1,2,3,4,5};

    Solution so ;

    so.findFrequentTreeSum();

    return 0;
}

