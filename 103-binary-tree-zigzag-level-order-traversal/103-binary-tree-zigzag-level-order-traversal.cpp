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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q; 
        q.push(root);
        vector<vector<int>> v;
        if(root==NULL)return v;
        int l=1,r=0;
        while(q.empty()==false){
            int n=q.size();
            vector<int> a;
            for(int i=0;i<n;i++){
                    TreeNode* curr=q.front();
                    q.pop();
                    a.push_back(curr->val);
                    if(curr->left!=NULL)q.push(curr->left);
                    if(curr->right!=NULL)q.push(curr->right);
                }
            if(r==1){
                reverse(a.begin(),a.end());
                r=0;
            }else{
               r=1;
            }
            
            v.push_back(a);
            a.clear();
        }
        return v;
    }
};