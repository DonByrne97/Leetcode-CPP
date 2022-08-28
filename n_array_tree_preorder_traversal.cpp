/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
private:
    void Travel(Node* root, vector<int> &result) {
        if(root == nullptr) {
            return; // Exit the function if root is null
        }
        result.push_back(root->val);
        for(Node* child : root->children) {
            Travel(child, result); // Recursively call 
                                // this function until root
                                // is null 
        }
    }
public:
    vector<int> preorder(Node* root) {
        vector<int> result; // Create our result vector
        Travel(root, result); // Function call 
        return result; // Return the result vector 
    }
};
