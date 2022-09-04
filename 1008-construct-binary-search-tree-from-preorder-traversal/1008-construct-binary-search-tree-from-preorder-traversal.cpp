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
    TreeNode* recur(vector<int>preorder,int& i,int bound){
        if(preorder.size() == i || preorder[i] > bound)
            return NULL;
        TreeNode* root = new TreeNode(preorder[i++]);
        root->left = recur(preorder,i,root->val);
        root->right = recur(preorder,i,bound);
        return root;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return recur(preorder,i,INT_MAX);
    }
};