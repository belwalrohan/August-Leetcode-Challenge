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
    void summ(TreeNode* root,vector<int>& res,int& ans,int sum)
    {
        if(root==NULL)
            return;
        for(int i=0;i<res.size();i++)
            res[i]+=root->val;
        res.push_back(root->val);
        for(int i=0;i<res.size();i++)
        {
            if(res[i]==sum)
                ans++;
        }
        summ(root->left,res,ans,sum);
        summ(root->right,res,ans,sum);
        for(int i=0;i<res.size();i++)
            res[i]-=res[res.size()-1];
        res.pop_back();
    }
    int pathSum(TreeNode* root, int sum) {
        int ans=0;
        vector<int> res;
        summ(root,res,ans,sum);
        return ans;
    }
};
