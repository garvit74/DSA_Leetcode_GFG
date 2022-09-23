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
    vector<vector<int>> ans;
    
    void BFSTraversal(TreeNode* root, int level){
        if(root == NULL){
            return;
        }
        if(ans.size() == level){
            ans.push_back(vector<int>());
        }
        ans[level].push_back(root->val);
        BFSTraversal(root->left, level + 1);
        BFSTraversal(root->right, level + 1);
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        BFSTraversal(root, 0);
        return ans;
    }
};