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
    int countNodes(TreeNode* root) {
        // subrpoblem definition: return total no. of nodes in a subtree/subproblem
        if(root==NULL)
            return 0;
        
        // else we count the current node and return this + the summation of answer from all possible choices
        // answer here is the count of nodes in subproblem/subtree, choices here is left or right subtree
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};
