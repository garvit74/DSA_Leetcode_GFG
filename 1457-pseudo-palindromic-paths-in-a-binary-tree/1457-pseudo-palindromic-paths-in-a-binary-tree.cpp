/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans = 0;
    int arr[10] = {};
    void fcnter(TreeNode* node){
        if(!node){
            return;
        }
        ++arr[node->val];
        fcnter(node->left);
        fcnter(node->right);
        if(!node->left && !node->right){
            int odd = 0;
            for(int i = 1; i < 10; ++i){
                if(arr[i] & 1){
                    ++odd;
                }
            }
            if(odd < 2){
                ++ans;
            }
        }
        --arr[node->val];
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        fcnter(root);
        return ans;
    }
};