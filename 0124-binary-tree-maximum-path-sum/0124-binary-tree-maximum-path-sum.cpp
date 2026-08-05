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
    int ans=INT_MIN;
public:
    int maxPathSum(TreeNode* root) {
        maxpath(root);
        return ans;
    }

    int maxpath(TreeNode* root){
        if(root==NULL)return 0;
        int left=maxpath(root->left);
        int right=maxpath(root->right);
        left=max(0,left);
        right=max(0,right);
        int path=left+right+root->val;
        ans=max(ans,path);
        return max(left,right)+root->val;
    }
};