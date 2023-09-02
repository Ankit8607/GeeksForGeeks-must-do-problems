// https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1

int dfs(Node *root,int &ans){
    if(root == NULL) return 0;
    
    int l=dfs(root->left,ans);
    int r=dfs(root->right,ans);
    ans=max(ans,1+l+r);
    return 1+max(l,r);
}

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        int ans=0;
        dfs(root,ans);
        return ans;
    }
};
