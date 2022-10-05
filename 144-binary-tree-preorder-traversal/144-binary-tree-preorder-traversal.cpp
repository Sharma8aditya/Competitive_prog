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
    int preorder(TreeNode* root, vector<int>& ans){
    if(root!=0)
    {
        ans.push_back(root->val);
        preorder(root->left, ans);
        preorder(root->right, ans);
    }
    return 0;
}
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        ans.clear();
        preorder(root, ans);
        return ans;
    }
};