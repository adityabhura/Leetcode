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
    
    TreeNode *help(int start_in,int end_in,int start_post,int end_post,vector<int>& inorder, vector<int>& postorder,map<int,int> &mp ){
        if(start_in>end_in || start_post>end_post)return NULL;
        
        int key=postorder[end_post];
        int index=mp[key];
        int isleft=index-start_in;
        TreeNode* root=new TreeNode(key);
        
        root->left=help(start_in,index-1,start_post,start_post+isleft-1,inorder,postorder,mp);
        root->right=help(index+1,end_in,start_post+isleft,end_post-1,inorder,postorder,mp);
        
        return root;
        
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
            map<int,int> mp;
            for(int i=0;i<inorder.size();i++){
                mp[inorder[i]]=i;
            }
            return help(0,inorder.size()-1,0,postorder.size()-1,inorder,postorder,mp);
        
    }
};