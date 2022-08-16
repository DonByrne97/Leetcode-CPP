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
    TreeNode* invertTree(TreeNode* root) {
        if(!root) // If there's no root, we stop executing the function and return the root. 
        {
            return root; 
        }
        {
            invertTree(root->left); // Recursively call this on the left child node. 
            invertTree(root->right); // Recursively call this on the right child node. 
            swap(root->left, root->right); // Replace the left child node with the right child node. 
        }
        return root; 
    }
};
