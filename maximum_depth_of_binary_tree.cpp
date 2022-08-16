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
    int maxDepth(TreeNode* root) {
        if(!root) // If there's no root, return 0. 
        {
            return 0; 
        }
        int maxLeft = maxDepth(root->left); // Recursivey call this function on the root's left child. 
        int maxRight = maxDepth(root->right); // Recursively call this function on the root's right child. 
        return max(maxLeft, maxRight) + 1; // Return the maximum number from either maxLeft or maxRight + 1. 
    }
};
