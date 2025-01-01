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
    // state definition: is subtree with root node 'root' has root to leaf path 
    // with its path sum equal to targetSum
    // NOTE: targetSum needs to be updated with 'targetSum-root->val' before making each recursive call
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
            return false;
        else if(root->left==NULL&&root->right==NULL&&root->val==targetSum)
            return true;
        
        // transition: return true if any choices is true
        if(hasPathSum(root->left, targetSum-root->val)||hasPathSum(root->right, targetSum-root->val))
            return true;
        return false;
    }
};
