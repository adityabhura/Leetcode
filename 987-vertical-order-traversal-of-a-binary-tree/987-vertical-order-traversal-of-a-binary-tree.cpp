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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        map<int,map<int,vector<int>>> mp;
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto x=q.front();
            TreeNode *curr=x.first;
            int n=q.size();
            q.pop();
            int i=x.second.first;
            int j=x.second.second;
            mp[i][j].push_back(curr->val);
            if(curr->left)q.push({curr->left,{i-1,j+1}});
            if(curr->right)q.push({curr->right,{i+1,j+1}});    
        }
        
        for(auto x:mp){
            vector<int> temp;
            for(auto y:x.second){
                sort(y.second.begin(),y.second.end());
                temp.insert(temp.end(),y.second.begin(),y.second.end());
            }
            ans.push_back(temp);
            
        }
        return ans;
    }
};