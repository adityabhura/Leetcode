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
    
    void help(vector<string> &s,TreeNode* root,string st){
        if(root==NULL)return;
        if(root->left==NULL && root->right==NULL){
            st+=to_string(root->val);
            s.push_back(st);
            return;
        }
        st+=to_string(root->val)+"->";
        help(s,root->left,st);
        help(s,root->right,st);
        
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> s;
        string st="";
        help(s,root,st);
            return s;
    }
};