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
        void help(vector<int> &s,TreeNode* root,int st,int c){
        if(root==NULL)return;
        if(root->left==NULL && root->right==NULL){
            st=root->val+st*10;
            s.push_back(st);
            return;
        }
        st=root->val+st*10;
        //    cout<<st<<"--";
        help(s,root->left,st,c+1);
        help(s,root->right,st,c+1);
        
    }
    int sumNumbers(TreeNode* root) {
        vector<int> s;
        int sum=0;
        help(s,root,0,0);
        for(int i=0;i<s.size();i++){
            //ut<<s[i]<<" ";
             sum+=s[i];
        }
        return sum;
        
    }
};