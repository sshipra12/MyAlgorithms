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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        // basic solution just put elements from both Trees and sort the array
        vector<int> ans;
        addElementsInArray(root1,ans);
        addElementsInArray(root2,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
    void addElementsInArray(TreeNode* root, vector<int>& ans){
        if(root==NULL)
            return;
        ans.push_back(root->val);
        addElementsInArray(root->left,ans);
        addElementsInArray(root->right,ans);
    }
};
