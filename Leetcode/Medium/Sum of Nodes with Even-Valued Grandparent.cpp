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
    int sumEvenGrandparent(TreeNode* root) {
        // we will solve this without the use of passing the parameter by reference
        // think in terms of subtree
      // TODO: Comment learning and thinking
        if(root==NULL)
            return 0;
        
        if(root->val%2==0){
            int grandChildrenSum=0;
            if(root->left!=NULL){
                if(root->left->left!=NULL)
                    grandChildrenSum+=root->left->left->val;

                if(root->left->right!=NULL)
                    grandChildrenSum+=root->left->right->val;
            }
            if(root->right!=NULL){
                if(root->right->left!=NULL)
                    grandChildrenSum+=root->right->left->val;

                if(root->right->right!=NULL)
                    grandChildrenSum+=root->right->right->val;
            }
            return grandChildrenSum + sumEvenGrandparent(root->left) + sumEvenGrandparent(root->right);
        }
        else
            return sumEvenGrandparent(root->left) + sumEvenGrandparent(root->right);
    }
};
