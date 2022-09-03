class Solution {
public:
    TreeNode* solve(int start_pre,int start_in,int end_in,vector<int>& preorder,vector<int>& inorder) 
    {
        if(start_pre>preorder.size()-1 || start_in>end_in)return NULL;
        
        
        int key=preorder[start_pre];
        int index;
        TreeNode* root=new TreeNode(key);
        for(int i=start_in;i<end_in;i++){
            if(inorder[i]==key){
                index=i;
                break;
            }
        }
        
        root->left=solve(start_pre+1,start_in,index-1,preorder,inorder);
        root->right=solve(start_pre+index+1-start_in,index+1,end_in,preorder,inorder);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       return solve(0, 0, inorder.size()-1, preorder, inorder);
    }
};