// https://practice.geeksforgeeks.org/problems/check-for-bst/1

class Solution
{
    public:
    
    pair<int,pair<int,int>> rec(Node *root){
        if(root==NULL) return {1,{1e9,-1e9}};
        
        pair<int,pair<int,int>> l=rec(root->left);
        pair<int,pair<int,int>> r=rec(root->right);
        int val=root->data;
        int ans=(val>l.second.second) and (val<r.second.first);
        
        return {ans&l.first&r.first,{min(l.second.first,val),max(r.second.second,val)}};
    }
    
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        return rec(root).first;
    }
};
