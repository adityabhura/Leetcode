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
    TreeNode* solve2(vector<int>& preorder,int s,int e)

    {

        if(s>e)return NULL;

        TreeNode* root=new TreeNode(preorder[s]);

        int index,rootValue=preorder[s];
        for(int i=s;i<=e;i++){
            if(preorder[i]>rootValue){
                index=i;
                break;
            }
        }
    cout<<rootValue<<"-"<<index<<" ";
        root->left=solve2(preorder,s+1,index-1);
        root->right=solve2(preorder,index,e);

        

        return root;

    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root=solve2(preorder,0,preorder.size()-1);
        return root;
    }
};