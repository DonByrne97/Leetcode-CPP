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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result; 
        if(!root) return result; 
        queue<TreeNode*> queue; 
        queue.push(root);
        queue.push(NULL);
        vector<int> curr_vec; 
        while(!queue.empty()) {
            TreeNode* front = queue.front();
            queue.pop();
            if(front == NULL) {
                result.push_back(curr_vec); 
                curr_vec.resize(0);
                if(queue.size() > 0) {
                    queue.push(NULL); 
                }
            }
            else {
                curr_vec.push_back(front->val); 
                if(front->left) queue.push(front->left);
                if(front->right) queue.push(front->right); 
            }
        }
        return result; 
    }
};
