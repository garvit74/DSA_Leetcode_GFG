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
    void solve(TreeNode* root, int val, int depth){
        
        if(root == NULL)
            return;
        
        if(depth == 1){
            TreeNode *node1 = new TreeNode(val);
            node1->left = root->left;
            root->left = node1;
            
            TreeNode *node2 = new TreeNode(val);
            node2->right = root->right;
            root->right = node2;
            return;
        }
        solve(root->left, val, depth-1);
        solve(root->right, val, depth-1);
        
    }
    
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode *node = new TreeNode(val);
            node->left = root;
            return node;
        }
        solve(root, val, depth-1);
        return root;
    }
};