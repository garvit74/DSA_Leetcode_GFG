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
    bool hasPathSum(TreeNode* root, int k) {
        if (root == NULL) return false;
        
        if (root -> left == NULL and root -> right == NULL) {
            
            if (k == root -> val) return true;
            else return false;
        }
        return hasPathSum (root -> right, k - root -> val) or hasPathSum (root -> left, k - root -> val);

    }
};