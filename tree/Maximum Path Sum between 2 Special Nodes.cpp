// https://practice.geeksforgeeks.org/problems/maximum-path-sum/1

class Solution {
public:

    int rec(Node *root,int &ans){
        if(root==NULL) return -1e9;
        
        if(root->left==NULL and root->right==NULL) return root->data;
        if(root->left==NULL || root->right==NULL) return root->data+max(rec(root->right,ans),rec(root->left,ans)); 
        int l=rec(root->left,ans), r=rec(root->right,ans);
        ans=max(ans,l+r+root->data);
        return root->data+max(l,r);
    }

    int maxPathSum(Node* root)
    {
        int ans=-1e9;
        int t=rec(root,ans);
        if(root->left==NULL || root->right==NULL) ans=max(ans,t);
        return ans;
    }
};
