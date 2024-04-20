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
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        // we will send this 'sum' by reference to 'sumOfLeftLeaves' method calculate the answer
        sumOfLeftLeaves(root,sum);

        return sum;
    }


    void sumOfLeftLeaves(TreeNode* root, int &sum) {
        if(root==NULL)
            return ;
        // for each current node search if it has a left leaf node and add its value to answer 'sum'
        if(root->left!=NULL){
            if((root->left)->left==NULL&&(root->left)->right==NULL)
                sum+=(root->left)->val;
        }

        // for traversing the tree
        sumOfLeftLeaves(root->left,sum);
        sumOfLeftLeaves(root->right,sum);
    }
};
