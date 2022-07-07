class Solution {
public:
    int ans = 0;
    void count(TreeNode* root,int k,long long int temp)
    {
        if(root==NULL)return;
        temp += root->val;
        if(temp==k)ans+=1;
        count(root->left,k,temp);
        count(root->right,k,temp);
    }
    void inorder(TreeNode *root,long long int k)
    {
        if(root==NULL)return;
        inorder(root->left,k);
        count(root,k,0);
        inorder(root->right,k);
    }
    int pathSum(TreeNode* root, int targetSum) {
        inorder(root,targetSum);
        return ans;
    }
};