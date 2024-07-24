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
    int averageOfSubtree(TreeNode* root) {
        if(root==NULL)
            return 0;
        
        if(root->val==(subtreeSum(root)/numberOfNodesInSubtree(root)))
            return 1 + averageOfSubtree(root->left) + averageOfSubtree(root->right);
        
        else return  averageOfSubtree(root->left) + averageOfSubtree(root->right);
    }

    int numberOfNodesInSubtree(TreeNode *root){
        // if we reach at null/no-existant node then value of this subproblem is 0
        if(root==NULL)
            return 0;

        // since here we don't have to return an optimal answer from choices (left subtree & right subtree)
        // then for every choice we can take we return the summation of answers from those choices
        //at any state/node/subproblem return 1 + no. of nodes in left subtree + no. of nodes in right subtree
        return 1 + numberOfNodesInSubtree(root->left) + numberOfNodesInSubtree(root->right);
    }

    int subtreeSum(TreeNode *root){
        if(root==NULL)
            return 0;
        
        return root->val + subtreeSum(root->left) + subtreeSum(root->right);
    }
};
