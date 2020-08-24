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
    int summ(TreeNode* root, int res)
    {
        if(!root)
            return res;
        if(root->left!=NULL && root->left->left==NULL && root->left->right==NULL)
        {
            res+=root->left->val;
            res=summ(root->right,res);
        }
        else
        {
            res=summ(root->left,res);
            res=summ(root->right,res);
        }
        return res;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return summ(root,0);
    }
};
