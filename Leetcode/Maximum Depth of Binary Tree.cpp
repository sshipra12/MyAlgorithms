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
    // here the subproblem is : maxDepth(TreeNode* root)
    // its defination: the maximum depth of a subtree(or a tree) which has the 'root' as the root node
    int maxDepth(TreeNode* root) {
        // base case: if wew reach null node means we reached empty subtree
        // and max depth of empty subtree having no nodes is 0
        if(root==NULL)
            return 0;
        
        // we choose the max between choices we can make
        return 1 + max(maxDepth(root->left),maxDepth(root->right));
    }
};
