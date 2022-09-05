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
class Bst{
    public:
    bool isBST;
    int maxNode;
    int minNode;
    int treeSum;
};


class Solution {
private:
    Bst solve(TreeNode* root,int &sum){
        // base case 
        if(root == NULL){
            return {true,INT_MIN,INT_MAX,0};
        }
        
        // traversing the left and right subtree
        Bst leftTree = solve(root->left,sum);
        Bst rightTree = solve(root->right,sum);
        
        // Evaluating current node on basis of current node
        Bst currentNode;
        // If the current node is greater than left tree maximum node & smaller than right tree's minimum node than it is bst
        currentNode.maxNode = max(root->val,rightTree.maxNode);
        currentNode.minNode = min(root->val,leftTree.minNode);
        currentNode.treeSum = leftTree.treeSum + rightTree.treeSum + root->val;
        
        
        // checking if current node is BST
        if(root->val > leftTree.maxNode && root->val < rightTree.minNode && leftTree.isBST && rightTree.isBST){
            currentNode.isBST = true;
        }
        else{
            currentNode.isBST = false;
        }
        
        // if Bst than updating current node as bst
        if(currentNode.isBST){
            sum = max(sum,currentNode.treeSum);
        }
        
        return currentNode;
    }
public:
    int maxSumBST(TreeNode* root) {
        int sum = 0;
        solve(root,sum);
        return sum;
    }
};